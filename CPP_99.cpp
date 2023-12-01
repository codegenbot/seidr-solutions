#include <string>
#include <cmath>

int closest_integer(std::string value) {
    double num = std::stod(value);
    int floor_num = std::floor(num);
    int ceil_num = std::ceil(num);
    if (num - floor_num < ceil_num - num) {
        return floor_num;
    } else {
        return ceil_num;
    }
}

int main() {
    std::string input;
    std::cout << "Enter a floating point number: ";
    std::cin >> input;
    int closest = closest_integer(input);
    std::cout << "Closest integer: " << closest << std::endl;
    return 0;
}