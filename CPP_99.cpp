#include <string>
#include <cmath>
#include <cassert>

int closest_integer(std::string value){
    float num = std::stof(value);
    int closest = std::round(num);
    if (num - closest == 0.5) {
        if (num > 0) {
            closest++;
        } else {
            closest--;
        }
    }
    return closest;
}