#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    string str1, str2;
    cout << "Enter the first string: ";
    cin >> str1;
    cout << "Enter the second string: ";
    cin >> str2;

    int len1 = str1.length(), len2 = str2.length();
    int result = gcd(len1, len2);
    cout << "GCD of lengths: " << result << endl;
}