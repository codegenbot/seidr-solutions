#include <iostream>
#include <vector>

bool isPrime(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++)
        if (num % i == 0)
            return false;
    return true;
}

int prime_fib(int n) {
    int a = 0, b = 1, count = 0;
    while (true) {
        if (isPrime(b)) {
            if (++count == n)
                return b;
            int temp = a + b;
            a = b;
            b = temp;
        } else
            b++;
    }
}

int main() {
    for(int i=1; i<=5; i++) {
        cout << prime_fib(i) << endl;
    }
    return 0;
}