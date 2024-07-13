#include <cmath>

using namespace std;

float triangle_area(float a, float b, float c) {
    if (a + b <= c || a + c <= b || b + c <= a) {
        return -1;
    } else {
        float s = (a + b + c) / 2.0f;
        return round((sqrt(s * (s-a) * (s-b) * (s-c))) * 100.0f) / 100.0f;
    }
}