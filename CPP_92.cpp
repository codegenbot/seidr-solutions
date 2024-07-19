```cpp
#include <iostream>
#include <cassert>

using namespace std;

int mainFunction() {
    string str1, str2, str3;
    cout << "Enter three numbers: ";
    cin >> str1 >> str2 >> str3;  
    cout << "The numbers are strings: " << str1 << ", " << str2 << ", " << str3 << "\n";
    return 0;
}