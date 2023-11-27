#include <iostream>
#include <string>
#include <cmath>

int closest_integer(std::string value) {
    float num = std::stof(value);  // convert string to float
    int rounded_num = std::round(num);  // round the float to the nearest integer

    // check if the rounded number is equidistant from two integers
    if (num - rounded_num == 0.5) {
        // round away from zero
        if (num > 0) {
            return std::ceil(num);
        } else {
            return std::floor(num);
        }
    } else {
        return rounded_num;
    }
}

int main() {
    assert(closest_integer("0") == 0);
    // more test cases...

    return 0;
}