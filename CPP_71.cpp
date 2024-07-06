#include <cmath>

using namespace std;

float triangle_area(float a, float b, float c) {
    if ((a + b > c) && (a + c > b) && (b + c > a))
        return (sqrt((a * b) * c)) / 2.0;
    else
        return -1.0f;
}