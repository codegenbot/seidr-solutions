#include <iostream>
#include <string>
#include <cmath>
#include <cassert>

using namespace std;

int closest_integer(string value) {
    double num = stod(value);
    return round(num);
}

int main() {
    assert(closest_integer("0") == 0);
    assert(closest_integer("1.4") == 1);
    assert(closest_integer("1.5") == 2);
    assert(closest_integer("-1.5") == -1);
    assert(closest_integer("-1.6") == -2);
    
    cout << "All tests passed!" << endl;
    return 0;
}