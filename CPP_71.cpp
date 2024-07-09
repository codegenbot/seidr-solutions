#include <iostream>

int main() {
    float a, b, c;
    std::cout << "Enter side lengths of a triangle (in cm): ";
    std::cin >> a >> b >> c;
    
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        float s = (a + b + c) / 2.0;
        float area = round((sqrt(s * (s - a) * (s - b) * (s - c))) * 100.0) / 100.0;
        std::cout << "The area of the triangle is: " << area << " square cm.\n";
    } else {
        std::cout << "The inputs do not form a valid triangle.\n";
    }
    
    return 0;
}