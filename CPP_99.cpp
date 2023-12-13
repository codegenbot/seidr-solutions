```cpp
#include <string>
#include <cmath>
#include <cassert>

int closest_integer(std::string value){
    double num = std::stod(value.c_str());
    int floor_num = std::floor(num);
    int ceil_num = std::ceil(num);
    if (num - floor_num < ceil_num - num) {
        return floor_num;
    } else {
        return ceil_num;
    }
}

int main() {
    assert(closest_integer("0") == 0);
    assert(closest_integer("1.4") == 1);
    assert(closest_integer("2.6") == 3);
    assert(closest_integer("-4.5") == -5);
    assert(closest_integer("10.1") == 10);
    assert(closest_integer("-10.9") == -11);

    return 0;
}
```