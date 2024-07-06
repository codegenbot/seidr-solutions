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
    long long result = special_factorial(n);
    cout << "Special Factorial of " << n << " is: " << result << endl;
    
    // assertion statement
    assert(result == 1);
    return 0;
}