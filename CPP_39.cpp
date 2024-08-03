```cpp
#include <stdio.h>
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
    scanf("%d", &n);
    printf("%d\n", prime_fib(n));
    return 0;
}