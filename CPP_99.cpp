#include <iostream>
#include <string>
#include <cmath>

int closest_integer(std::string value) {
    float num = stof(value);
    int lower = floor(num);
    int higher = ceil(num);
    
    if (num - lower < higher - num) {
        return lower;
    } else {
        return higher;
    }
}