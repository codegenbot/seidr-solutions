```cpp
#include<iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0)
        b = a % b;
    return a;
}

int main() {
    string str1, str2;
    cout << "Enter the first string: ";
    getline(cin, str1);
    cout << "Enter the second string: ";
    getline(cin, str2);
    cout << "GCD is: " << gcd(str1.length(), str2.length());
    return 0;
}