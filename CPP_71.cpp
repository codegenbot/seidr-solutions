```c++
#include <cmath>

using namespace std;

float triangle_area(float a, float b, float c) {
    if ((a + b > c) && (a + c > b) && (b + c > a)) { // Check if the three sides form a valid triangle
        return 0.5 * sqrt(pow(a, 2) * pow(b, 2) - pow(c, 2)); // Calculate the area using Heron's formula
    } else {
        return -1; // Return -1 if the three sides do not form a valid triangle
    }
}