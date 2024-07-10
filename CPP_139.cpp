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

long long calculation() {
    long long result;
    string input;
    cout << "Enter a number: ";
    getline(cin, input);
    result = stol(input); 
    if(result < 0) {
        cout << "Error! Please enter a positive integer." << endl;
    } else {
        cout << "The special factorial of " << to_string(result) << " is: " << special_factorial(result) << endl;
    }
}