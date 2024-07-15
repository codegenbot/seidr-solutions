#include <cmath>
#include <cassert>

int closest_integer(const std::string& value) {
    double num = std::stod(value);
    int rounded = std::round(num);
    if (num - std::floor(num) == 0.5) {
        return (num > 0) ? std::ceil(num) : std::floor(num);
    }
    return rounded;
}

int main() {
    assert (closest_integer("0") == 0);
    return 0;
}