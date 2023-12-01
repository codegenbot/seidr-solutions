#include <cmath>
#include <algorithm>

bool right_angle_triangle(float a, float b, float c) {
    if (a <= 0 || b <= 0 || c <= 0) {
        return false;
    }
    
    float maxSide = std::max(std::max(a, b), c);
    float sumSquares = std::pow(a, 2) + std::pow(b, 2) + std::pow(c, 2) - std::pow(maxSide, 2);
    
    return sumSquares == std::pow(maxSide, 2);
}