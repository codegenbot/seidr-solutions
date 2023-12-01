#include <cmath>

bool right_angle_triangle(float a, float b, float c) {
    if (std::pow(a, 2) + std::pow(b, 2) == std::pow(c, 2) || std::pow(b, 2) + std::pow(c, 2) == std::pow(a, 2) || std::pow(c, 2) + std::pow(a, 2) == std::pow(b, 2)) {
        return true;
    } else {
        return false;
    }
    
    return false;
}