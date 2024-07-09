#include <stdio.h>
using namespace std;

int prime_fib(int n) {
    int a = 0, b = 1;
    for (int i = 2; ; i++) {
        if (i == n) return b;
        int temp = a + b;
        a = b;
        b = temp;
        bool is_prime = true;
        for (int j = 2; j * j <= b; j++)
            if (b % j == 0) is_prime = false;
        if (!is_prime) continue;
        return b;
    }
}

int main() {
    int n;
    printf("Enter the position of the number: ");
    scanf("%d", &n);
    printf("The %dth number that is a Fibonacci number and it's also prime is %d\n", n, prime_fib(n));
    return 0;
}