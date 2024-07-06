#include <cmath>

using namespace std;

float triangle_area(float a, float b, float c) {
    if (!isValidTriangle(a, b, c)) return -1.0f;
    return (sqrt((a * b) * c)) / 2.0;
}

bool isValidTriangle(float a, float b, float c) {
    return (a + b > c) && (a + c > b) && (b + c > a);
}