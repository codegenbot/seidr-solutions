#include <iostream>
#include <string> // Include the <string> header

template <typename T>
T compare_one(const T& a, const T& b) {
    if (a > b) {
        return a;
    } else if (a < b) {
        return b;
    }
    return T();
}

int main() {
    assert(compare_one(T("1"), std::to_string(1)).empty());

    return 0;
}