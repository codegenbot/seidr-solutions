int count_up_to(vector<int> primes, int n) {
    int count = 0;
    for (int prime : primes) {
        if (prime <= n) {
            ++count;
        } else {
            break;
        }
    }
    return count;
}

bool issame(vector<int> a, vector<int> b) {
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
    int n;
    cin >> n;
    
    vector<int> result = sieve_of_eratosthenes(n);
    
    vector<int> expected{2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
    
    if (count_up_to(result, n) == count_up_to(expected, n) && issame(result, expected)) {
        cout << "Correct";
    } else {
        cout << "Incorrect";
    }
    
    return 0;
}