#include <cmath>

int closest_integer(const std::string& value) {
    double num = stod(value);
    int lower = std::floor(num);
    int upper = std::ceil(num);
    return (num - lower < upper - num) ? lower : upper;
}

int main() {
    // Add test cases to validate the function
}