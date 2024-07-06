```cpp
#include <iostream>
using namespace std;

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

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Special factorial of " << n << " is " << special_factorial(n) << endl;
    assert(special_factorial(0) == 1);
    return 0;
}