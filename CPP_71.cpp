int main() {
    float a, b, c;
    std::cout << "Enter three sides of the triangle: ";
    std::cin >> a >> b >> c;

    if(triangle_area(a, b, c) == -1.0f) {
        std::cout << "The given values do not form a valid triangle.";
    } else {
        float result = triangle_area(a, b, c);
        std::cout << "The area of the triangle is: ";
        std::cout << std::fixed << std::setprecision(2);
        std::cout << result;
    }

    return 0;
}