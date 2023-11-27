#include <iostream>
#include <algorithm>
#include <string>

template <typename T>
T compare_one(T a, T b) {
    if (a > b) {
        return a;
    } else if (b > a) {
        return b;
    } else {
        return T();
    }
}