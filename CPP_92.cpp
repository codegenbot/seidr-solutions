```cpp
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

bool any_int(float a, float b, float c) {
    return (a == (int)a) && (b == (int)b) && (c == (int)c);
}

int main() {
    float a, b, c;
    cout << "Enter three strings: ";
    string str1 = to_string(a);
    string str2 = to_string(b);
    string str3 = to_string(c);
    cin >> str1 >> str2 >> str3;
    a = stod(str1);  
    b = stod(str2);
    c = stod(str3);
    if(any_int(a, b, c))
        cout << "The numbers are integers: " << a << ", " << b << ", " << c << "\n";
    else
        cout << "The numbers are not integers: " << a << ", " << b << ", " << c << "\n";
    return 0;
}