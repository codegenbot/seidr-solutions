```cpp
#include <cmath>
#include <limits>
#include <string>

double closest_integer(const std::string& value) {
    double num = std::stod(value);
    return (num >= 0) ? std::ceil(num) : std::floor(num);
}

int main() {
    assert(closest_integer("0") == 0);
}