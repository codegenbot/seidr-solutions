#include <iostream>
#include <string>
#include <algorithm>
#include <cassert>

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
    assert(compare_one(string("1"), string("2")) == "2");
    assert(compare_one(1, 2) == 2);
    
    return 0;
}