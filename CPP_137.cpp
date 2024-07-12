#include <iostream>
#include <string>
#include <cassert>

using namespace std;

template <typename T>
T compare_one(T a, T b) {
    if (a > b)
        return a;
    else if (a < b)
        return b;
    else
        return T();
}

int main() {
    assert(compare_one(1, 2) == 2);
    assert(compare_one(1.5f, 2.7f) == 2.7f);
    assert(compare_one("1", "2") == "2");
    return 0;
}