#include <cmath>

using namespace std;

float triangle_area(float a, float b, float c) {
    if (a + b <= c || a + c <= b || b + c <= a)
        return -1;
    else
        return 0.5 * sqrt((a * (b + c) - b * c) * ((b + c) - a));
}