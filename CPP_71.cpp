#include <cmath>

using namespace std;

float triangle_area(float a, float b, float c) {
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        return (sqrt((a * b) * c));
    } else {
        return -1;
    }
}