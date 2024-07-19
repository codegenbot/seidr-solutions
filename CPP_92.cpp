```cpp
#include <iostream>
#include <iomanip>

using namespace std;

bool any_int(float a, float b, float c) {
    return (a == (int)a) && (b == (int)b) && (c == (int)c);
}

int main() {
    float a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    if(any_int(a, b, c))
        cout << "The numbers are integers: " << int(a) << ", " << int(b) << ", " << int(c) << "\n";
    else
        cout << "The numbers are not integers: " << a << ", " << b << ", " << c << "\n";
    return 0;
}