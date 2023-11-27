#include <iostream>
#include <algorithm>

template <typename T>
T compare(const T& a, const T& b) {
    if (a > b) {
        return a;
    } else if (b > a) {
        return b;
    } else {
        return T();
    }
}