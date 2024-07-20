#include <stdio.h>
#include <vector>

using namespace std;

bool isPrime(int num) {
    if(num <= 1)
        return false;
    for(int i = 2; i * i <= num; i++)
        if(num % i == 0)
            return false;
    return true;
}

int prime_fib(int n) {
    int fib_num = 0, prev_prev = 0, prev = 1;
    int count = 0;

    while(true) {
        int temp = prev + prev_prev;
        prev_prev = prev;
        prev = temp;
        if(isPrime(temp)) {
            fib_num = temp;
            count++;
            if(count == n)
                return fib_num;
        }
    }
}

int main() {
    printf("%d\n", prime_fib(1));
    printf("%d\n", prime_fib(2));
    printf("%d\n", prime_fib(3));
    printf("%d\n", prime_fib(4));
    printf("%d\n", prime_fib(5));
    return 0;
}