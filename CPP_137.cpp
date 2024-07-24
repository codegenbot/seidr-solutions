#include <cassert>
#include <string>
#include <algorithm>
#include <iostream>

using namespace std;

template <typename T>
T compare_one(T a, T b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    assert(compare_one<string>("1", "2") == "2");
    assert(compare_one<int>(1, 3) == 3);
    assert(compare_one<float>(1.5f, 0.5f) == 1.5f);
    return 0;
}