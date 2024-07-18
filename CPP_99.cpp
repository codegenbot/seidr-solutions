#include <iostream>
#include <cassert> // Include assert header

int closest_integer(std::string value) {
    double num = std::stod(value);
    int rounded = static_cast<int>(num + 0.5); // Round to nearest integer
    return rounded;
}

int main() {
    assert(closest_integer("0") == 0); // Check output
    
    return 0;
}