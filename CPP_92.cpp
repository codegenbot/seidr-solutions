#include <iostream>
#include <cassert>
#include <string>
#include <iomanip>

using namespace std;

int mainFunction() {
    double x = 3.01;
    int y, z;
    cout << "Enter three numbers: ";
    if (!(cin >> y && cin >> skipws >> z)) {
        cout << "Error: Please enter valid integer values.\n";
    } else {
        cout << "The numbers are integers: " << y << ", " << z << "\n";
    }

    assert(any_int(x, 4, 7));

    return 0;
}

int any_int(double val, int a, int b) {
    return (val == a || val == b);
}