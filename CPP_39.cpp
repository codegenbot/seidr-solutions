#include <iostream>
#include <vector>
using namespace std;

bool is_prime(int num) {
    if (num <= 1) return false;
    if (num <= 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return false;
    }
    return true;
}

int prime_fib(int n) {
    if (n == 1) return 2;  // Handle the special case for the first prime Fibonacci number
    vector<int> fib = {1, 1};
    vector<int> prime_fibs;
    int i = 2;
    while (prime_fibs.size() < n) {
        int next_fib = fib[i - 1] + fib[i - 2];
        fib.push_back(next_fib);
        if (is_prime(next_fib)) {
            prime_fibs.push_back(next_fib);
        }
        i++;
    }
    return prime_fibs[n - 1];
}

int main() {
    int n;
    cin >> n;
    cout << prime_fib(n) << endl;
    return 0;
}