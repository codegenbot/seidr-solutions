```cpp
#include <iostream>
#include <iomanip>

using namespace std;

bool any_int(float a, float b, float c) {
    const double epsilon = 1e-6;
    return (abs(a - (int)a) < epsilon) && (abs(b - (int)b) < epsilon) && (abs(c - (int)c) < epsilon);
}

int main() {
    float a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    if(any_int(a, b, c))
        cout << "The numbers are integers: " << a << ", " << b << ", " << c << "\n";
    else
        cout << "The numbers are not integers: " << a << ", " << b << ", " << c << "\n";
    return 0;
}