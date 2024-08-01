#include <stdio.h>
#include <vector>
using namespace std;

int prime_fib(int n) {
    vector<int> fib = {0, 1};
    int i = 2;
    while (true) {
        int nextFib = fib[i-1] + fib[i];
        if (nextFib > n)
            break;
        fib.push_back(nextFib);
        i++;
    }
    for (int num : fib) {
        bool isPrime = true;
        for (int j = 2; j * j <= num; j++) {
            if (num % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
            return num;
    }
    return -1; // not found
}

int main() {
    printf("%d\n", prime_fib(5));
    return 0;
}