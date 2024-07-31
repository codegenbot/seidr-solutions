#include <iostream>
#include <vector>

using namespace std;

bool is_prime(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

bool is_multiply_prime(int a){
    vector<int> primes;
    for (int i = 2; i <= 100; i++) {
        if (is_prime(i)) {
            primes.push_back(i);
        }
    }

    for (int i = 0; i < primes.size(); i++) {
        for (int j = i; j < primes.size(); j++) {
            for (int k = j; k < primes.size(); k++) {
                if (primes[i] * primes[j] * primes[k] == a) {
                    return true;
                }
            }
        }
    }
    return false;
}

int main() {
    int num;
    cout << "Enter a number less than 100: ";
    cin >> num;
    
    if (is_multiply_prime(num)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}