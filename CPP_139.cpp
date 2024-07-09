```cpp
#include <bits/stdc++.h>
using namespace std;

long long special_factorial(int n) {
    if (n <= 1)
        return 1;
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
        for (int j = 2; j <= i; j++)
            result *= j;
    }
    return result;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Special factorial of " << n << " is " << special_factorial(n) << endl;
    return 0;
}