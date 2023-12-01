#include <iostream>
#include <vector>

using namespace std;

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

vector<int> count_up_to(int n) {
    vector<int> primes;

    for (int i = 2; i < n; i++) {
        if (isPrime(i)) {
            primes.push_back(i);
        }
    }

    return primes;
}