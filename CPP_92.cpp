```cpp
#include <iostream>
#include <iomanip>

using namespace std;

bool any_int(int a, int b, int c) {
    return (a == static_cast<int>(a)) && (b == static_cast<int>(b)) && (c == static_cast<int>(c));
}

int originalMain() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    if(any_int(a, b, c))
        cout << "The numbers are integers: " << a << ", " << b << ", " << c << "\n";
    else
        cout << "Error: Please enter valid integer values.\n";
    return 0;
}

int main() {
    originalMain();
    return 0;
}