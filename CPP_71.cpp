float triangle_area(float a, float b, float c);
int main() {
    float a, b, c;
    std::cout << "Enter side1: ";
    std::cin >> a;
    std::cout << "Enter side2: ";
    std::cin >> b;
    std::cout << "Enter side3: ";
    std::cin >> c;
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        float s = (a + b + c) / 2.0;
        float area = round((sqrt(s * (s - a) * (s - b) * (s - c))) * 100.0) / 100.0;
        std::cout << "The area of the triangle is: " << area << std::endl;
    } else {
        std::cout << "These sides do not form a valid triangle." << std::endl;
    }
    return 0;
}

float triangle_area(float a, float b, float c) {
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        float s = (a + b + c) / 2.0;
        return round((sqrt(s * (s - a) * (s - b) * (s - c))) * 100.0) / 100.0;
    } else {
        return -1.0f;
    }
}