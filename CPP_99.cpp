#include <iostream>
#include <cmath>
#include <cassert>

int closest_integer(std::string value){
    float num = std::stof(value); 
    int floor_num = floor(num); 
    int ceil_num = ceil(num);
    
    float diff_floor = std::abs(num - floor_num);
    float diff_ceil = std::abs(num - ceil_num);
    
    if(diff_floor == diff_ceil){
        if(num > 0){
            return ceil_num;
        }else{
            return floor_num;
        }
    }
    
    if(diff_floor < diff_ceil){
        return floor_num;
    }else{
        return ceil_num;
    }
}

int main() {
    assert(closest_integer("0") == 0);
    return 0;
}