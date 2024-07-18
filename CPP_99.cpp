#include <iostream>
#include <cmath>

int closest_integer(std::string value) {
    double num = stod(value);
    int lower = floor(num);
    int upper = ceil(num);
    return (abs(num - lower) < abs(num - upper)) ? lower : upper;
}

using namespace std;

int main() {
    assert(closest_integer("0") == 0);
    return 0;
}