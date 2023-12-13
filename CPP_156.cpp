```
#include <iostream>
#include <vector>
#include <string>
#include <cassert>
using namespace std;

auto roman = std::vector<std::string>{"m", "cm", "d", "cd", "c", "xc", "l", "xl", "x", "ix", "v", "iv", "i"};

int main() {
    assert (int_to_mini_roman(1000) == "m");
    return 0;
}
```