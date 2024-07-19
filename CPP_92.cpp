```cpp
#include <iostream>
#include <cassert>

using namespace std;

int mainFunction() {
    string str1, str2, str3;
    cout << "Enter three numbers: ";
    if (!(cin >> str1 >> str2 >> str3)) {
        cout << "Error: Please enter valid integer values.\n";
    } else {
        int a = stoi(str1), b = stoi(str2), c = stoi(str3);
        static_assert(a == 3 && b == 4 && c == 7, "Incorrect input values");
        cout << "The numbers are integers: " << a << ", " << b << ", " << c << "\n";
    }

    return 0;
}