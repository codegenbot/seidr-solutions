#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>
#include <algorithm>

using namespace std;

bool is_prime(int num) {
    if (num <= 1) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;
    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) return false;
    }
    return true;
}

vector<int> count_up_to(int n) {
    vector<int> primes;
    for (int i = 2; i < n; ++i) {
        if (is_prime(i)) {
            primes.push_back(i);
        }
    }
    return primes;
}

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame(count_up_to(101), {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97}));
    cout << "Test passed" << endl;
    return 0;
}