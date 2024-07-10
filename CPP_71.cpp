#include <iostream>
#include <cmath>
#include <cassert>
#include <limits>

float triangle_area(int a, int b, int c) {
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        float s = (a + b + c) / 2.0;
        return sqrt(s * (s - a) * (s - b) * (s - c));
    } else {
        return -1.0f;
    }
}

int main() {
    int a, b, c; 
    std::cin >> a;
    while (!(std::cin >> b)) { 
        std::cout << "Invalid input. Please enter an integer: ";
        std::cin.clear(); 
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
        std::cin >> b;
    }
    while (!(std::cin >> c)) {
        std::cout << "Invalid input. Please enter an integer: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cin >> c;
    } 
    assert(std::abs(triangle_area(a, b, c) + 1)<0.01);
    float result = triangle_area(a, b, c);
    std::cout << "The area of the triangle is: " << static_cast<int>(result) << std::endl;
    return 0;
}