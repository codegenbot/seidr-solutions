#include <string>
#include <cmath>

int closest_integer(const std::string& value){
    float num = std::stof(value);
    int closest = std::round(num);
    int floor_num = std::floor(num);
    int ceil_num = std::ceil(num);
    
    if(std::abs(num - floor_num) < std::abs(num - ceil_num)){
        closest = floor_num;
    }
    else if(std::abs(num - floor_num) > std::abs(num - ceil_num)){
        closest = ceil_num;
    }
    else{
        closest = (num > 0) ? ceil_num : floor_num;
    }
    
    return closest;
}