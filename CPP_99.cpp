#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int closest_integer(std::string value) {
    double num = stod(value);
    int lower = floor(num);
    int upper = ceil(num);
    return abs(num - lower) < abs(num - upper) ? lower : upper;
}

int main() {
    assert (closest_integer("0") == 0);
    // Add more test cases here if needed

    return 0;
}