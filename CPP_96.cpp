#include <vector>
#include <cassert>
using namespace std;

vector<int> count_up_to(int n){
    vector<int> primes;
    for (int num = 2; num <= n; num++) {
        bool is_prime = true;
        for (int i = 2; i < num; i++) {
            if (num % i == 0) {
                is_prime = false;
                break;
            }
        }
        if (is_prime) {
            primes.push_back(num);
        }
    }
    return primes;
}

bool issame(const vector<int> &a, const vector<int> &b){
    if (a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}