#include <cmath>

// Function to calculate the area of a triangle given the lengths of its sides
double triangle_area(float a, float b, float c) {
    if (a + b > c && a + c > b && b + c > a) {
        float s = (a + b + c) / 2;
        double area = std::sqrt(s * (s - a) * (s - b) * (s - c));
        return std::round(area * 100) / 100;
    } else {
        return -1;
    }
}