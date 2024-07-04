#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int closest_integer(string value) {
    double num = stod(value);
    if (num > 0) {
        return static_cast<int>(floor(num + 0.5));
    } else {
        return static_cast<int>(ceil(num - 0.5));
    }
}

int main() {
    cout << closest_integer("0") << endl;    // Output should be 0
    cout << closest_integer("2.7") << endl;  // Output should be 3
    cout << closest_integer("-2.7") << endl; // Output should be -3

    return 0;
}