#include <stdio.h>
using namespace std;

int fib4(int n) {
    if (n <= 3) return 0;
    int f1 = 0, f2 = 0, f3 = 2, f4 = 0;
    for (int i = 4; i <= n; i++) {
        int res = f1 + f2 + f3 + f4;
        f1 = f2;
        f2 = f3;
        f3 = f4;
        f4 = res;
    }
    return f4;
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("The %d-th element is: %d\n", n, fib4(n));
    return 0;
}