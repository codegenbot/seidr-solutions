long long special_factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    long long result = 1;
    for (int i = n; i > 0; --i) {
        result *= i;
        for (int j = i - 1; j > 0; --j) {
            result *= j;
        }
    }
    return result;
}

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    long long res = special_factorial(n);
    
    if (res == 1) {
        cout << "The special factorial of " << n << " is not defined." << endl;
    } else {
        cout << "The special factorial of " << n << " is " << res << "." << endl;
    }
    
    return 0;
}