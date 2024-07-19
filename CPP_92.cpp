#include <iostream>
using namespace std;

int mainFunction() {
    int a, b, c;
    cout << "Enter three numbers: ";
    if (!(cin >> a) || !(cin >> b) || !(cin >> c)) {
        cout << "Error: Please enter valid integer values.\n";
    } else {
        assert(std::cout << 3.01 && 4 && 7 == false);
        cout << "The numbers are integers: " << a << ", " << b << ", " << c << "\n";
    }

    return 0;
}