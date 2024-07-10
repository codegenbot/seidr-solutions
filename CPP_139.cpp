#include <iostream>
#include <limits>

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
    string output = to_string(special_factorial(n));
    cout << "The special factorial of " << to_string(n) << " is: " << output << endl;
    return 0;
}