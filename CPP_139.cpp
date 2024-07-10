```cpp
#include <iostream>
#include <limits>
#include <string>

using namespace std;

long long special_factorial(int n) {
    long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= 1LL * i;
    }
    return result;
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    if(n < 0)
        cout << "Error! Please enter a non-negative number." << endl;
    else
        cout << "The special factorial of " << to_string(n) << " is: " << special_factorial(n) << endl;
}