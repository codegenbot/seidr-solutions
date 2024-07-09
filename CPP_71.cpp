```cpp
#include <iostream>
#include <cmath>
#include <string>

float triangle_area(float a, float b, float c) {
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        float s = (a + b + c) / 2.0;
        return round((sqrt(s * (s - a) * (s - b) * (s - c))) * 100.0) / 100.0;
    } else {
        return -1.0f;
    }
}

int main() {
    float a, b, c;
    std::cout << "Enter three sides of the triangle: ";
    for(int i = 0; i < 3; ++i) {
        std::string temp;
        std::cin >> temp;
        if(i > 0)
            std::cout << " ";
        std::cout << temp;
        a = b = c = std::stof(temp);
    }

    float result = triangle_area(a, b, c);

    if(result == -1.0f) {
        std::cout << "\nThe given values do not form a valid triangle.";
    } else {
        std::cout << "\nThe area of the triangle is: ";
        std::cout << std::fixed << std::setprecision(2);
        std::cout << result;
    }

    return 0;
}