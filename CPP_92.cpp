```c++
#include <iostream>
#include <cassert>

using namespace std;

int mainFunction() {
    int a, b, c;
    cout << "Enter three numbers: ";
    if (!(cin >> a) || !(cin >> b) || !(cin >> c)) {
        cout << "Error: Please enter valid integer values.\n";
    } else {
        assert(a == 3 && b == 4 && c == 7);
        cout << "The numbers are integers: " << a << ", " << b << ", " << c << "\n";
    }

    return 0;
}