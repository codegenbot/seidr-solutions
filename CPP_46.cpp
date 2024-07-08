#include <stdio.h>
using namespace std;

int fib4(int n) {
    if (n <= 3) return 0;
    int a = 2, b = 0, c = 0, d = 0;
    for (int i = 4; i <= n; i++) {
        int temp = a + b + c;
        d = c;
        c = b;
        b = temp;
        a = d;
    }
    return a;

}

int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("The %d-th element of the fib4 sequence is: %d\n", n, fib4(n));
    return 0;
}