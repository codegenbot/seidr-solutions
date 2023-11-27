#include <iostream>
using namespace std;

int fibfib(int n) {
    if (n == 0)
        return 0;
    else if (n == 1 || n == 2)
        return 1;
    else
        return fibfib(n - 1) + fibfib(n - 2) + fibfib(n - 3);
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "fibfib(" << n << ") = " << fibfib(n) << endl;
    return 0;
}