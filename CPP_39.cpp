#include <stdio.h>
#include <vector>

using namespace std;

int prime_fib(int n) {
    vector<int> fib = {0, 1};
    for (int i = 2; ; i++) {
        int next = fib[i-1] + fib[i-2];
        if (next > n) break;
        fib.push_back(next);
    }
    
    for (int f : fib) {
        bool isPrime = true;
        for (int p = 2; p*p <= f && isPrime; p++) {
            if (f % p == 0) isPrime = false;
        }
        if (isPrime) return f;
    }
    
    return -1; // not found
}

int main() {
    printf("%d\n", prime_fib(5));
    return 0;
}