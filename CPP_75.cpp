#include <iostream>
#include <vector>
using namespace std;

bool is_prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

bool is_multiply_prime(int a) {
    vector<int> primes;
    for (int i = 2; i < 100; ++i) {
        if (is_prime(i)) {
            primes.push_back(i);
        }
    }
    
    int n = primes.size();
    for (int i = 0; i < n; ++i) {
        for (int j = i; j < n; ++j) {
            for (int k = j; k < n; ++k) {
                if (primes[i] * primes[j] * primes[k] == a) {
                    return true;
                }
            }
        }
    }
    return false;
}

int main() {
    int a;
    cin >> a;
    if (is_multiply_prime(a)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    return 0;
}