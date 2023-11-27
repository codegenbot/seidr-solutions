#include <string>
#include <cmath>

int closest_integer(const std::string& value){
    double num = std::stod(value);
    int floor_num = std::floor(num);
    int ceil_num = std::ceil(num);
    
    if (num - floor_num < ceil_num - num) {
        return floor_num;
    } else {
        return ceil_num;
    }
}