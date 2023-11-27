#include <string>
#include <cmath>

int closest_integer(std::string value){
    float num = std::stof(value);
    int floor_num = std::floor(num);
    int ceil_num = std::ceil(num);

    if(std::abs(num - floor_num) < std::abs(num - ceil_num)){
        return floor_num;
    }
    else if(std::abs(num - floor_num) > std::abs(num - ceil_num)){
        return ceil_num;
    }
    else{
        if(num > 0){
            return ceil_num;
        }
        else{
            return floor_num;
        }
    }
}