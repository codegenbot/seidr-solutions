#include <iostream>
#include <vector>

using namespace std;

vector<int> sieveOfEratosthenes(int n) {
    vector<bool> isPrime(n+1, true);
    for (int p = 2; p*p <= n; p++) {
        if (isPrime[p]) {
            for (int i = p*2; i <= n; i += p) {
                isPrime[i] = false;
            }
        }
    }

    vector<int> primes;
    for (int i = 2; i <= n; ++i) {
        if (isPrime[i])
            primes.push_back(i);
    }
    return primes;
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    
    vector<int> primes = sieveOfEratosthenes(n);
    
    if (primes.empty()) {
        cout << "No prime numbers found in the range 1 to " << n << endl;
    } else {
        cout << "Prime numbers up to " << n << ":";
        for (int num : primes) {
            cout << " " << num;
        }
        cout << endl;
    }
    
    return 0;
}