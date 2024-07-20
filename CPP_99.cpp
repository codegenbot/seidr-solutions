#include <cmath>
#include <cassert>

int closest_integer(std::string value) {
    double num = stod(value);
    int rounded = static_cast<int>(num < 0 ? ceil(num - 0.5) : floor(num + 0.5));
    return rounded;
}

int main() {
    assert(closest_integer("0") == 0);
    // Add more test cases here
    return 0;
}