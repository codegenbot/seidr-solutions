```
int main() {
    std::cout << "Enter sides of triangle: ";
    float side1, side2, side3;
    std::cin >> side1 >> side2 >> side3;

    assert(std::abs(triangle_area(side1, side2, side3)) < 0.01);
    float result = triangle_area(side1, side2, side3);
    std::cout << "The area of the triangle is: " << result << std::endl;
    return 0;
}