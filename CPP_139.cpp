#include <iostream>
#include <limits>
#include <iomanip>

using namespace std;

long long special_factorial(long long n) {
    long long result = 1;
    for (long long i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    long long result;
    cout << "Enter a number: ";
    cin >> ws >> result;
    if(result < 0) {
        cout << "Error! Please enter a non-negative integer." << endl;
    } else {
        cout << "The special factorial of " << result << " is: " << special_factorial(result) << endl;
    }
}