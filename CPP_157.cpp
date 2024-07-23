bool right_angle_triangle(float a, float b, float c) {
    if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a)
        return true;
    else
        return false;
}

int main() {
    float sideA, sideB, sideC;
    
    std::cout << "Enter the lengths of three sides: ";
    std::cin >> sideA >> sideB >> sideC;
    
    if (right_angle_triangle(sideA, sideB, sideC)) {
        std::cout << "The triangle is a right-angled triangle.\n";
    } else {
        std::cout << "The triangle is not a right-angled triangle.\n";
    }
    
    return 0;
}