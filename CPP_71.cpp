#include <cmath>

using namespace std;

float triangle_area(float a, float b, float c) {
    if (a + b > c && a + c > b && b + c > a)
        return 0.5f * sqrt(pow(c, 2) - pow(a, 2) - pow(b, 2));
    else
        return -1;
}