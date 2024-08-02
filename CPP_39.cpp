#include <vector>
using namespace std;

int prime_fib(int n) {
    vector<int> fib(1);
    for (int i = 1; i <= n; ++i) {
        if (i == 0 || i == 1)
            fib.push_back(1);
        else
            fib.push_back(fib[i-1] + fib[i-2]);
    }

    for (int i = 0; i < fib.size(); ++i) {
        bool isPrime = true;
        for (int j = 2; j * j <= fib[i]; ++j) {
            if (fib[i] % j == 0)
                isPrime = false;
        }
        if (isPrime)
            return fib[i];
    }

    return -1; // or any other default value
}