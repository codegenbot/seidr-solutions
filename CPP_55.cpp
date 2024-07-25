#include <stdio.h>

using namespace std;

int fib(int n) {
    if (n <= 1)
        return n;
    int a = 0, b = 1, result = 0;
    for (int i = 2; i <= n; i++) {
        result = a + b;
        a = b;
        b = result;
    }
    return result;
}

int main() {
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Fibonacci Number is %d\n", fib(num));
    return 0;
}