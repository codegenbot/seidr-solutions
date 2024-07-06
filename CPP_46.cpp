#include <stdio.h>
using namespace std;

int fib4(int n) {
    if (n <= 0)
        return 0;
    else if (n == 1 || n == 2)
        return 0;
    else if (n == 3)
        return 2;
    int a = 0, b = 0, c = 2, d = 0;
    for (int i = 4; i <= n; i++) {
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
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("The %d-th element of the fib4 sequence is: %d\n", n, fib4(n));
    return 0;
}