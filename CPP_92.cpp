```cpp
#include <iostream>
#include <string>

using namespace std;

bool any_int(float a, float b, float c) {
    return (a == static_cast<int>(a)) || (b == static_cast<int>(b)) || (c == static_cast<int>(c));
}

int main() {
    float a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    if (any_int(a, b, c))
        cout << "At least one of the input numbers is an integer.\n";
    else
        cout << "None of the input numbers are integers.\n";

    return 0;
}