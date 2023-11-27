#include <iostream>
#include <string>
#include <cmath>

int closest_integer(std::string value){
    float num = std::stof(value); 
    int rounded_num = std::round(num); 

    if (num - rounded_num == 0.5) {
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
    assert (closest_integer("0") == 0);
    // more test cases...

    return 0;
}