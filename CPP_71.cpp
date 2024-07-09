#include <iostream>

double triangle_area(int a, int b, int c) {
    double s = (a + b + c)/2;
    return std::sqrt(s*(s-a)*(s-b)*(s-c));
}

int main() {
    double area = triangle_area(2, 2, 10);
    if(area > 0)
        std::cout << "The area of the triangle is: " << area;
    else
        std::cout << "This doesn't form a valid triangle.";
    return 0;
}