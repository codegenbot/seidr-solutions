```cpp
#include <iostream>
#include <iomanip>

using namespace std;

bool any_int(float a, float b, float c) {
    return (a == (int)a) && (b == (int)b) && (c == (int)c);
}

int originalMain() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    if(any_int(a, b, c))
        cout << "The numbers are integers: " << a << ", " << b << ", " << c << "\n";
    else
        cout << "The numbers are not integers: " << (double)a << ", " << (double)b << ", " << (double)c << "\n";
    return 0;
}

int main() {
    originalMain();
    return 0;
}