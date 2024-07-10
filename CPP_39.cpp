#include <stdio.h>
#include <vector>

using namespace std;

int prime_fib(int n) {
    vector<int> fib(1);
    int a = 0, b = 1;
    for (int i = 2; i <= n; ++i) {
        int temp = a + b;
        a = b;
        b = temp;
        fib.push_back(b);
    }
    for (int i = 0; i < fib.size(); ++i) {
        bool isPrime = true;
        if (fib[i] == 1)
            continue;
        for (int j = 2; j * j <= fib[i]; ++j) {
            if (fib[i] % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
            return fib[i];
    }
    return -1;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", prime_fib(n));
    return 0;
}