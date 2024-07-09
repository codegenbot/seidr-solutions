#include <stdio.h>
using namespace std;

int fib4(int n) {
    if(n <= 1)
        return 0;
    int a = 0, b = 2, c = 0, d = 2;
    for(int i = 3; i <= n; i++) {
        int temp = a + b + c;
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
    printf("The %dth element is: %d\n", n, fib4(n));
    return 0;
}