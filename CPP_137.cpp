#include <any>

template <typename T, typename U>
auto compare_one(T a, U b) {
    assert(a.type() == b.type());

    if (a.has_value() || a.type() != typeid(std::string)) {
        if (std::any_cast<T>(a) > std::any_cast<U>(b))
            return a;
        else if (std::any_cast<T>(a) < std::any_cast<U>(b))
            return b;
        else
            return T{};
    } else {
        float a_float = std::stof(std::any_cast<std::string>(a));
        float b_float = std::stof(std::any_cast<std::string>(b));
        if (a_float > b_float)
            return a;
        else if (a_float < b_float)
            return b;
        else
            return std::string{};
    }
}