#include <stdio.h>
#include <vector>

using namespace std;

int prime_fib(int n) {
    vector<int> fib = {0, 1};
    int i = 2;
    while (true) {
        int nextFib = fib[i-1] + fib[i];
        if (nextFib > n) break;
        fib.push_back(nextFib);
        for (int j = 2; j * j <= nextFib; j++) {
            if (nextFib % j == 0) {
                i++;
                break;
            }
        }
    }
    return fib[n-1];
}

int main() {
    printf("%d\n", prime_fib(1));
    printf("%d\n", prime_fib(2));
    printf("%d\n", prime_fib(3));
    printf("%d\n", prime_fib(4));
    printf("%d\n", prime_fib(5));
    return 0;
}