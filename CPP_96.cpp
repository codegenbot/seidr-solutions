#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

bool isSameVectors(const vector<int>& a, const vector<int>& b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<int> countUpTo(int n) {
    vector<int> primes;
    for (int i = 2; i <= n; ++i) {
        bool isPrime = true;
        for (int j = 2; j * j <= i; ++j) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
            primes.push_back(i);
    }
    return primes;
}

int main_func() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    vector<int> primes = countUpTo(n);
    for (int prime : primes) {
        cout << "Prime number: " << prime << endl;
    }
}