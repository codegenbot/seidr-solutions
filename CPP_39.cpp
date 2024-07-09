#include <stdio.h>
using namespace std;

int prime_fib(int n) {
    int a = 0, b = 1;
    for (int i = 2; ; i++) {
        int temp = a + b;
        if (temp > n) break;
        a = b;
        b = temp;
        if (isPrime(temp)) return temp;
    }
}

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++)
        if (num % i == 0) return false;
    return true;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", prime_fib(n));
    return 0;
}