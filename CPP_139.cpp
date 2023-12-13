
#include <iostream>
#include <string>
using namespace std;

long long special_factorial(int n) {
    if (n <= 0) {
        return 1;
    } else {
        long long result = n * special_factorial(n - 1);
        return result;
    }
}

int main() {
    string str;
    cout << "Enter a number: ";
    cin >> str;
    int n = stoi(str, 0, str.length());
    cout << "The Brazilian factorial of " << n << " is: " << special_factorial(n) << endl;
    return 0;
}