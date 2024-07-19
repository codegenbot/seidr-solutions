float triangle_area(float a, float b, float c) {
    if (a + b > c && a + c > b && b + c > a) {
        float s = (a + b + c) / 2;
        return round((sqrt(s * (s - a) * (s - b) * (s - c))) * 100.0) / 100.0;
    } else {
        return -1.0f;
    }
}

int main() {
    float sideA, sideB, sideC;
    std::cout << "Enter the lengths of sides A, B and C: ";
    std::cin >> sideA >> sideB >> sideC;

    if (triangle_area(sideA, sideB, sideC) == -1.0f)
        std::cout << "Invalid input! The entered values don't form a triangle." << std::endl;
    else
        std::cout << "The area of the triangle is: " << triangle_area(sideA, sideB, sideC) << std::endl;

    return 0;
}