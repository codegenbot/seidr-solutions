#include <cmath>
#include <cassert>

// Function to calculate the area of a triangle
float triangle_area(float a, float b, float c) {
    float s = (a + b + c) / 2;
    float area = sqrt(s * (s - a) * (s - b) * (s - c));
    if (a + b > c && a + c > b && b + c > a) {
        return round(area * 100) / 100;
    } else {
        return -1;
    }
}

// Main function to execute the code
int main() {
    // Your code logic here, e.g., reading input values and calling the triangle_area function
    return 0; // Return 0 to indicate successful execution
}