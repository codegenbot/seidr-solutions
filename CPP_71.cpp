#include <cmath>

using namespace std;

float triangle_area(float a, float b, float c) {
    if ((a + b > c) && (a + c > b) && (b + c > a))
        return abs((a * b) / 2.0f);
    else
        return -1;
}