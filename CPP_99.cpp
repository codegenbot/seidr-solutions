#include <iostream>
#include <cmath>
#include <cassert>
#include <string>

int closest_integer(const std::string& value){
    double num = std::stod(value);
    int rounded = std::round(num);
    int floorVal = std::floor(num);
    int ceilVal = std::ceil(num);
    
    if (rounded - num < num - rounded) {
        return rounded;
    } else if (num - floorVal < ceilVal - num) {
        return floorVal;
    } else {
        return ceilVal;
    }
}

int main() {
    assert(closest_integer("0"s) == 0);
    return 0;
}