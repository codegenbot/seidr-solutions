#include <algorithm>
#include <string>
#include <type_traits>

template<typename T>
T boost_any_cast(const boost::any& operand) {
    try {
        return boost::any_cast<T>(operand);
    }
    catch(const boost::bad_any_cast& e) {
        return T();
    }
}

template<typename T1, typename T2>
boost::any compare_one(const T1& a, const T2& b) {
    static_assert(std::is_arithmetic<T1>::value || std::is_same<T1, std::string>::value,
                  "T1 must be an arithmetic type or std::string");
    static_assert(std::is_arithmetic<T2>::value || std::is_same<T2, std::string>::value,
                  "T2 must be an arithmetic type or std::string");
    return std::max(boost_any_cast<T1>(a), boost_any_cast<T2>(b));
}