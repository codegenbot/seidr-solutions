bool issame(const vector<int>& v1, const vector<int>& v2) {
    if (v1.size() != v2.size()) {
        return false;
    }
    for (size_t i = 0; i < v1.size(); ++i) {
        if (v1[i] != v2[i]) {
            return false;
        }
    }
    return true;
}

vector<int> count_up_to(int n);

int main() {
    vector<int> expected_primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
    
    vector<int> result = count_up_to(101);
    
    if (issame(result, expected_primes)) {
        cout << "Output matches expected prime numbers from 2 to 101." << endl;
    } else {
        cout << "Output does not match expected prime numbers." << endl;
    }
    
    return 0;
}

vector<int> count_up_to(int n) {
    vector<int> result;
    if (n <= 1) {
        return result;
    }
    
    vector<bool> isPrime(n, true);
    isPrime[0] = isPrime[1] = false;
    
    for (int i = 2; i < n; ++i) {
        if (isPrime[i]) {
            result.push_back(i);
            for (int j = i * 2; j < n; j += i) {
                isPrime[j] = false;
            }
        }
    }
    
    return result;
}