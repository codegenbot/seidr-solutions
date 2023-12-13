```cpp
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

int closest_integer_main() {
    std::string value1 = "0";
    std::string value2 = "1.4";
    std::string value3 = "2.6";
    std::string value4 = "-4.5";
    std::string value5 = "10.1";
    std::string value6 = "-10.9";

    closest_integer(value1);
    closest_integer(value2);
    closest_integer(value3);
    closest_integer(value4);
    closest_integer(value5);
    closest_integer(value6);

    return 0;
}
```