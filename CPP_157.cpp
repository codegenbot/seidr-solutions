#include <iostream>

bool right_angle_triangle(int a, int b, int c) {
    if((a*a + b*b == c*c) || (a*a + c*c == b*b) || (b*b + c*c == a*a)) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;

    if(right_angle_triangle(a, b, c)) {
        std::cout << "The triangle is a right angle triangle." << std::endl;
    } else {
        std::cout << "The triangle is not a right angle triangle." << std::endl;
    }

    return 0;
}