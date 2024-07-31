#include <cmath>

int closest_integer(std::string value) {
    double num = stod(value);
    int lower = floor(num);
    int upper = ceil(num);
    return (num - lower < upper - num) ? lower : upper;
}

int main() {
    assert(closest_integer("0") == 0);
}