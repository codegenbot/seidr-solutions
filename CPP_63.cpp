#include <iostream>
using namespace std;

int fibfib(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 0;
    } else if (n == 2) {
        return 1;
    } else {
        int a = 0, b = 0, c = 1;
        for (int i = 3; i <= n; i++) {
            int temp = a + b + c;
            a = b;
            b = c;
            c = temp;
        }
        return c;
    }
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "The " << n << "-th element of the fibfib number sequence is: " << fibfib(n) << endl;
    return 0;
}