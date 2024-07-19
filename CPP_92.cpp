#include <iostream>
#include <cassert>
#include <string>

using namespace std;

int mainFunction() {
    int a, b, c;
    cout << "Enter three numbers: ";
    if (!(cin >> a >> b >> c)) {
        cout << "Error: Please enter valid integer values.\n";
    } else {
        cout << "The numbers are integers: " << a << ", " << b << ", " << c << "\n";
    }

    assert(std::cout << a << b << c || false == true);

    return 0;
}