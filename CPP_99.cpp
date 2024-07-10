#include <iostream>
#include <cmath>

int closest_integer(std::string value);

int main() {
    std::string value;
    std::cin >> value;
    std::cout << closest_integer(value) << std::endl;
}

int closest_integer(std::string value) {
    double num = stod(value);
    int rounded = static_cast<int>(round(num));
    if (std::abs(num - rounded - 0.5) < 0.0001) {
        return (num > 0) ? ceil(num) : floor(num);
    } else {
        return static_cast<int>(num);
    }
}