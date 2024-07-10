#include <iostream>
#include <limits>
#include <string>

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
    std::string input;
    cout << "Enter a number: ";
    getline(cin, input);
    result = stoll(input); // or use stol for long
    if(result < 0) {
        cout << "Error! Please enter a positive integer." << endl;
    } else {
        cout << "The special factorial of " << result << " is: " << special_factorial(result) << endl;
    }
}