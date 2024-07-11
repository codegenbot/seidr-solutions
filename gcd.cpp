```cpp
#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0)
        a %= b;
    return a;
}

int main() {
    string a = "", b = ""; 
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    int result = gcd(stoi(a), stoi(b)); 
    cout << "GCD: " << result;
    return 0;
}