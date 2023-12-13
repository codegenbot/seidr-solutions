```cpp
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

void test_closest_integer() {
    assert (closest_integer("0") == 0);
    assert (closest_integer("1.4") == 1);
    assert (closest_integer("2.6") == 3);
    assert (closest_integer("-4.5") == -5);
    assert (closest_integer("10.1") == 10);
    assert (closest_integer("-10.9") == -11);
}

int main() {
    test_closest_integer();
    return 0;
}
```