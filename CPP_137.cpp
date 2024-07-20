#include <iostream>
#include <cassert>
#include <string>

template<typename T>
const T compare_one(const T& a, const T& b) {
    if (a < b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    assert(compare_one<std::string>("1", "1") == "1");
    return 0;
}