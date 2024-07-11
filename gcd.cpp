```cpp
#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0)
        a %= b;
    return a;
}

int main() {
    int a = 0; 
    int b = 0; 
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    int result = gcd(a, b); 
    cout << "GCD: " << result;
    return 0;
}