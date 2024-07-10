#include <iostream>
#include <limits>

using namespace std;

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    
    long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= 1LL * i;
    }
    cout << "The special factorial of " << n << " is: " << result << endl;
}