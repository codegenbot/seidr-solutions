```cpp
#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0)
        a %= b;
    return a;
}

int main() {
    string str1 = "", str2 = ""; 
    cout << "Enter first number: ";
    cin >> str1;
    cout << "Enter second number: ";
    cin >> str2;
    int result = gcd(stoi(str1), stoi(str2)); 
    cout << "GCD: " << result;
    return 0;
}