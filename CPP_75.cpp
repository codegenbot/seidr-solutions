#include <iostream>
#include <vector>

using namespace std;

bool is_prime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

bool is_multiply_prime(int a) {
    if (a < 2) return false;
    vector<int> primes;
    for (int i = 2; i <= 100 && primes.size() < 3; ++i) {
        if (is_prime(i) && a % i == 0) {
            primes.push_back(i);
            a /= i;
        }
    }
    return primes.size() == 3 && a == 1;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << (is_multiply_prime(num) ? "true" : "false") << endl;
    return 0;
}