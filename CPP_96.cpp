#include <iostream>
#include <vector>

using namespace std;

vector<int> count_up_to(int n) {
    vector<bool> sieve(n + 1, true);
    for (int i = 2; i * i <= n; ++i) {
        if (sieve[i]) {
            for (int j = i * i; j <= n; j += i) {
                sieve[j] = false;
            }
        }
    }
    
    vector<int> primes;
    for (int i = 2; i <= n; ++i) {
        if (sieve[i])
            primes.push_back(i);
    }
    return primes;
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    
    vector<int> primes = count_up_to(n);
    
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