#include <iostream>
#include <cassert>
using namespace std;

int closest_integer(double num) {
    int integer = static_cast<int>(num);
    if (abs(num - integer) > abs(num - (integer + 1))) {
        return integer + 1;
    } else {
        return integer;
    }
}

int main() {
    double num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "The closest integer is: " << closest_integer(num) << endl;
    assert(closest_integer(stod("0")) == 0);
    return 0;
}