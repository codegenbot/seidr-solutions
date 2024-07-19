#include <iostream>
#include <cassert>
#include <string>
#include <iomanip>

using namespace std;

int mainFunction() {
    double x = 3.01;
    int y, z;
    cout << "Enter three numbers: ";
    if (!(cin >> fixed >> setprecision(0) << x >> skipws >> y && cin >> skipws >> z)) {
        cout << "Error: Please enter valid integer values.\n";
    } else {
        cout << "The numbers are integers: " << y << ", " << z << "\n";
    }

    return 0;
}