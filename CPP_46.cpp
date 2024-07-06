#include <stdio.h>
using namespace std;

int fib4(int n) {
    if (n <= 3)
        return 0;
    int a = 2, b = 0, c = 0, d = 0;
    for (int i = 4; i <= n; ++i) {
        int temp = a + b + c + d;
        d = c;
        c = b;
        b = a;
        a = temp;
    }
    return a;
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("The %d-th element of the fib4 number sequence is: %d\n", n, fib4(n));
    return 0;
}