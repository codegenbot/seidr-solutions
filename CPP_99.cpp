```cpp
#include <iostream>
#include <cassert>
using namespace std;

int closest_integer(double num) {
    int integer = static_cast<int>(num);
    if (abs(num - integer) > abs(num - (integer + 1))) {
        return integer + 1;
    } else {
        return integer;
    }
}

assert(closest_integer(0.0) == 0);