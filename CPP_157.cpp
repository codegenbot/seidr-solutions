```
int main() {
    bool right_angle_triangle(float a, float b, float c) {
        if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a)
            return true;
        else
            return false;
    }
    int input; // Declare the variable for input.
    std::cout << "Enter side length 1: ";
    std::cin >> a; 
    std::cout << "Enter side length 2: ";
    std::cin >> b;
    std::cout << "Enter side length 3: ";
    std::cin >> c;
    
    if (right_angle_triangle(a, b, c))
        std::cout << "It is a right angle triangle.\n";
    else
        std::cout << "It is not a right angle triangle.\n";

    return 0;
}