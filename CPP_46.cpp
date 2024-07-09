#include <stdio.h>
using namespace std;

int fib4(int n) {
    if (n <= 1)
        return 0;
    if (n == 2)
        return 2;
    int a = 0, b = 0, c = 2, d = 0;
    for (int i = 3; i <= n; i++) {
        int temp = a + b + c + d;
        a = b;
        b = c;
        c = d;
        d = temp;
    }
    return d;
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("The %d-th element of the fib4 sequence is: %d\n", n, fib4(n));
    return 0;
}