#include <iostream>
using namespace std;

int prime_fib(int n) {
    int a = 0, b = 1;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            printf("%d\n", a);
        } else {
            printf("%d\n", b);
        }
        int temp = a;
        a = b;
        b = temp + b;
    }
    return b;
}

int main() {
    int n;
    cin >> n;
    cout << prime_fib(n) << endl;
    return 0;
}