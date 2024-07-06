#include <iostream>
using namespace std;

long long fact(int n) {
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

long long special_factorial(int n) {
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= fact(i);
    }
    return result;
}

int main() {
    cout << "Special factorial of 1 is: " << special_factorial(1) << endl;
    return 0;
}