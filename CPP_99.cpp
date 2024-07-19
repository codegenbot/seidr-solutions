#include <cmath>
#include <cassert>

int closest_integer(const std::string& value) {
    double num = std::stod(value);
    int closestInt = std::round(num);
    return closestInt;
}

int main() {
    assert(closest_integer("0") == 0);
    
    return 0;
}