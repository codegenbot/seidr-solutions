#include <iostream>
#include <algorithm>
#include <typeinfo>

template<typename T>
T compare(const T& a, const T& b) {
    if (a > b) {
        return a;
    }
    else if (b > a) {
        return b;
    }
    else {
        return T();
    }
}

template<typename T>
std::string compare_one(T a, T b) {
    auto result = compare(a, b);
    if (result == T()) {
        return "None";
    }
    return std::to_string(result);
}