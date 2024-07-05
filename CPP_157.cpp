#include <iostream>
#include <algorithm>
#include <cmath>

bool right_angle_triangle(float a, float b, float c) {
    float x = std::max(a, std::max(b, c));
    float y, z;
    if (x == a) {
        y = b;
        z = c;
    } else if (x == b) {
        y = a;
        z = c;
    } else {
        y = a;
        z = b;
    }
    return std::fabs(x * x - (y * y + z * z)) < 1e-6;
}

int main() {
    float a, b, c;
    std::cin >> a >> b >> c;
    if(right_angle_triangle(a, b, c)) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }
    return 0;
}