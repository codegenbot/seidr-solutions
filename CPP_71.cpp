#include <cmath>

using namespace std;

float triangle_area(float a, float b, float c) {
    if (a + b <= c || a + c <= b || b + c <= a) {
        return -1;
    }
    float s = (a + b + c) / 2.0f;
    return round( sqrt( pow(s-a, 2) + pow(s-b, 2) + pow(s-c, 2) - 4 * s * (s-a)*(s-b)*(s-c) ) / 2.0f, 2);
}