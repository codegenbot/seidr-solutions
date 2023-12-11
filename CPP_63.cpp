```
#include <iostream>
using namespace std;

int fibfib(int n) {
    if (n <= 1) {
        return 0;
    } else {
        return fibfib(n-1) + fibfib(n-2) + fibfib(n-3);
    }
}

void print_result(int n) {
    cout << "The " << n << "-th FibFib number is: ";
    cout << fibfib(n) << endl;
}

int main() {
    int n = 8;
    print_result(n);
    return 0;
}
```