#include <boost/any.hpp>
#include <boost/variant2/variant.hpp>

namespace boost { namespace variant2 {

template <typename... Ts>
struct recursive_variant;

template <>
struct recursive_variant<> {
    using type = boost::variant<>();
};

template <typename T, typename... Ts>
struct recursive_variant<T, Ts...> {
    using type = boost::variant<T, typename recursive_variant<Ts...>::type>;
};

} } // namespace boost::variant2

using namespace boost;
using namespace boost::variant2;

boost::any compare_one(boost::any a, boost::any b) {
    if (holds_alternative<int>(a) && holds_alternive<double>(b)) {
        return get<int>(a) > get<double>(b) ? a : b;
    } else if (holds_alternative<double>(a) && holds_alternive<int>(b)) {
        return get<double>(a) > get<int>(b) ? a : b;
    } else if (holds_alternative<std::string>(a) && holds_alternive<double>(b)) {
        std::string str = get<std::string>(a);
        double num = get<double>(b);
        return str > std::to_string(num) ? a : b;
    } else if (holds_alternative<double>(a) && holds_alternive<std::string>(b)) {
        std::string str = get<std::string>(b);
        double num = get<double>(a);
        return std::to_string(num) > str ? a : b;
    } else if (holds_alternative<std::string>(a) && holds_alternive<std::string>(b)) {
        std::string str1 = get<std::string>(a);
        std::string str2 = get<std::string>(b);
        return str1 > str2 ? a : b;
    } else if (holds_alternative<int>(a) && holds_alternive<std::string>(b)) {
        int num = get<int>(a);
        std::string str = get<std::string>(b);
        return std::to_string(num) > str ? a : b;
    } else if (holds_alternative<std::string>(a) && holds_alternive<int>(b)) {
        int num = get<int>(b);
        std::string str = get<std::string>(a);
        return str > std::to_string(num) ? a : b;
    } else if (holds_alternative<double>(a) && holds_alternive<double>(b)) {
        double num1 = get<double>(a);
        double num2 = get<double>(b);
        return num1 > num2 ? a : b;
    } else {
        return boost::any();
    }
}