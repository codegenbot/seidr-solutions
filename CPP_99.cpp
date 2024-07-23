#include <string>
#include <cmath>

int closest_integer(std::string value) {
    double num = stod(value);
    int integerPart = (int)num;
    if (abs(num - integerPart) < 0.5) {
        return integerPart + (num > 0 ? 1 : -1);
    } else {
        return integerPart;
    }
}

int main() {
    assert(closest_integer("0") == 0);
    // your code here
}