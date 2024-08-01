#include <vector>

using namespace std;

int prime_fib(int n) {
    vector<int> fib = {0, 1};
    int i = 2;
    while (fib.size() <= n) {
        fib.push_back(fib[i-1] + fib[i-2]);
        i++;
    }
    for (i = fib.size()-1; i >= 0; i--) {
        if (isPrime(fib[i])) {
            return fib[i];
        }
    }
    return -1;
}

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}