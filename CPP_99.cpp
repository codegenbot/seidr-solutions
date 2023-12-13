#include <string>
#include <cmath>
#include <iostream>

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
    closest_integer("0");
    closest_integer("1.4");
    closest_integer("2.6");
    closest_integer("-4.5");
    closest_integer("10.1");
    closest_integer("-10.9");

    return 0;
}