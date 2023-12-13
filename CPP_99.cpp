```cpp
#include <iostream>
#include <cassert>
#include <string>
#include <cmath>

int closest_integer(std::string value){
    double num = std::stod(value);
    int floor_num = std::floor(num);
    int ceil_num = std::ceil(num);
    if (num - floor_num < ceil_num - num) {
        return floor_num;
    } else {
        return ceil_num;
    }
}

int main() {
    // Tests
    assert(closest_integer("3.4") == 3);
    assert(closest_integer("4.6") == 5);
    assert(closest_integer("7.0") == 7);

    std::cout << "All tests passed!" << std::endl;

    return 0;
}
```