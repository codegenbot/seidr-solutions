```cpp
#include <cmath>
#include <iostream>
using namespace std;

double closest_integer(string value) {
    double num = stod(value);
    return (num >= 0) ? ceil(num) : floor(num);
}

int main() {
    assert(closest_integer("0") == 0.0);
    cout << closest_integer("3.7");
    return 0;
}