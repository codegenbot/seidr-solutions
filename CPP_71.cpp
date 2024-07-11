```cpp
int main() {
    int a, b, c;
    std::cout << "Enter the lengths of three sides of a triangle: ";
    std::cin >> a >> b >> c;
    float area = triangle_area(a, b, c);
    if (area == -1.0f)
        std::cout << "Not a valid triangle.\n";
    else
        std::cout << "The area of the triangle is: " << static_cast<float>(a) << ", "
                   << static_cast<float>(b) << ", " << static_cast<float>(c) << "\n";
    return 0;
}