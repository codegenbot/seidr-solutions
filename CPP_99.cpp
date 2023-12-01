#include <string>
#include <cmath>

int closest_integer(std::string value){
    float num = std::stof(value);
    int roundedNum = std::round(num);
    int floorNum = std::floor(num);
    int ceilNum = std::ceil(num);
    
    if (std::abs(num - roundedNum) < std::abs(num - floorNum) && std::abs(num - roundedNum) < std::abs(num - ceilNum)){
        return roundedNum;
    }
    else if (std::abs(num - floorNum) < std::abs(num - roundedNum) && std::abs(num - floorNum) < std::abs(num - ceilNum)){
        return floorNum;
    }
    else {
        return ceilNum;
    }
}