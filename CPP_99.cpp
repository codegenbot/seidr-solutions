#include <iostream>
#include <string>
#include <cmath>
#include <cassert>

using namespace std;

int closest_integer(const string& value) {
    double num = stod(value);
    int closestInt = static_cast<int>(round(num));
    if (fabs(num - closestInt) == 0.5) {
        closestInt = (num - closestInt) > 0 ? static_cast<int>(ceil(num)) : static_cast<int>(floor(num));
    }
    return closestInt;
}

int main() {
    assert(closest_integer("0") == 0);
    // Add more test cases here
    return 0;
}