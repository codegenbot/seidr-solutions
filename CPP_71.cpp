#include<iostream>
namespace std {}

float triangle_area(float a, float b, float c) {
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        float s = (a + b + c) / 2.0;
        return round((sqrt(s*(s-a)*(s-b)*(s-c))) * 100.0) / 100.0;
    } else {
        return -1.0f;
    }
}

int main() {
    float a, b, c;
    std::cout << "Enter three sides of the triangle: ";
    std::cin >> a >> b >> c;

    if (a <= 0 || b <= 0 || c <= 0) {
        std::cout << "Error: All sides must be greater than zero.\n";
    } else {
        float area = triangle_area(a, b, c);
        if (area == -1.0f)
            std::cout << "These values do not form a valid triangle.";
        else
            std::cout << "The area of the triangle is: " << area;
    }

    return 0;