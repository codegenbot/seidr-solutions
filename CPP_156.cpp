```
#include <iostream>
#include <array>
#include <string>
#include <cassert>
using namespace std;

const array<const char*, 13> roman = {"m", "cm", "d", "cd", "c", "xc", "l", "xl", "x", "ix", "v", "iv", "i"};

int int_to_mini_roman(int num) {
    // Your code here
    return 0;
}

int main() {
    assert (std::to_string(int_to_mini_roman(1000)) == "m");
    return 0;
}
```