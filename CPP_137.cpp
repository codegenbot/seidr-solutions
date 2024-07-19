#include <any>
#include <cassert>

template<typename T>
std::any compare_one(const std::any& a, const std::any& b) {
    assert(a.type() == b.type());

    if(a.type() == typeid(T)) {
        if(std::any_cast<T>(a) > std::any_cast<T>(b))
            return a;
        else if(std::any_cast<T>(a) < std::any_cast<T>(b))
            return b;
        else
            return T{}; // Default value for comparison
    }

    return std::any(); // None
}