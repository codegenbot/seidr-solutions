#include <vector>
#include <cassert>

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) { 
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<int> count_up_to(int n);

vector<int> count_up_to(int n){
    vector<int> primes;
    if(n < 2) {
        return primes;
    }
    vector<bool> is_prime(n, true);
    for(int p = 2; p * p < n; p++) {
        if(is_prime[p]) {
            for(int i = p * p; i < n; i += p) {
                is_prime[i] = false;
            }
        }
    }
    for(int i = 2; i < n; i++) {
        if(is_prime[i]) {
            primes.push_back(i);
        }
    }
    return primes;
}

assert(issame(count_up_to(101), {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97}));