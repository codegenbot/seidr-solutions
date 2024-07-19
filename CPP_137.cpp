#include <boost/any.hpp>
#include <cassert>

template <typename T, typename U>
auto compare_one(T a, U b) {
    assert(a.type() == b.type());

    if (a.empty() || a.type() != typeid(std::string)) {
        if (boost::any_cast<T>(a) > boost::any_cast<U>(b))
            return a;
        else if (boost::any_cast<T>(a) < boost::any_cast<U>(b))
            return b;
        else
            return T{};
    } else {
        float a_float = std::stof(boost::any_cast<std::string>(a));
        float b_float = std::stof(boost::any_cast<std::string>(b));
        if (a_float > b_float)
            return a;
        else if (a_float < b_float)
            return b;
        else
            return std::string{};
    }
}