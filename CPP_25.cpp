#include <vector>

vector<int> factorize(int n){
    vector<int> factors;
    for (int i = 2; i*i <= n; i++) {
        while (n % i == 0) {
            factors.push_back(i);
            n /= i;
        }
    }
    if (n > 1) {
        factors.push_back(n);
    }
    return factors;
}

bool issame(vector<int> a, vector<int> b){
    if (a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<int> test1 = factorize(24);
    vector<int> test2 = factorize(24);
    assert(issame(test1, test2));

    vector<int> test3 = factorize(15);
    vector<int> test4 = factorize(20);
    assert(!issame(test3, test4));

    return 0;
}