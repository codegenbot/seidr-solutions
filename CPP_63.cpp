#include <iostream>
using namespace std;

int fibfib(int n) {
    if (n <= 1) {
        return 0;
    } else {
        return fibfib(n-1) + fibfib(n-2) + fibfib(n-3);
    }
}

int main() {
    int n = 8;
    cout << "The " << n << "-th FibFib number is: ";
    cout << fibfib(n) << endl;
    return 0;
}