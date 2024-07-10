```cpp
int main() {
    int a, b, c; 
    std::cout << "Enter sides of triangle: ";
    std::cin >> a >> b >> c; 
    assert(std::abs(triangle_area(a, b, c) + 1)<0.01);
    float result = triangle_area(a, b, c);
    std::cout << "The area of the triangle is: " << static_cast<int>(result) << std::endl;
    return 0;
}