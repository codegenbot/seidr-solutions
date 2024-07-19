#include <iostream>
#include <vector>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int prime_fib(int n) {
    vector<int> fib = {0, 1};
    int i = 2;
    while (true) {
        fib.push_back(fib[i - 1] + fib[i - 2]);
        if (isPrime(fib[i])) {
            n--;
            if (n == 0) return fib[i];
        }
        i++;
    }
}

int main() {
    int n;
    cin >> n;
    cout << prime_fib(n) << endl;
    return 0;
}