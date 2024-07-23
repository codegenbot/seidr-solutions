```cpp
#include <cmath>

bool right_angle_triangle(float a, float b, float c) {
    if (a == 0 || b == 0 || c == 0) 
        return false; 
    if (std::abs(a*a + b*b - c*c) <= std::numeric_limits<float>::epsilon() ||
       std::abs(a*a + c*c - b*b) <= std::numeric_limits<float>::epsilon() ||
       std::abs(b*b + c*c - a*a) <= std::numeric_limits<float>::epsilon())
        return true;
    else
        return false;
}