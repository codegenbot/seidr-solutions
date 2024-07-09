vector<int> issame(vector<int> a, vector<int> b) {
    vector<int> result;
    if (a.size() != b.size()) {
        return result;
    }
    
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] == b[i]) {
            result.push_back(i);
        }
    }
    
    return result;
}

vector<int> count_up_to(int n) {
    vector<int> result;
    if (n <= 1) {
        return result;
    }
    
    vector<bool> isPrime(n, true);
    isPrime[0] = isPrime[1] = false;
    
    for (int i = 2; i * i < n; ++i) {
        if (isPrime[i]) {
            for (int j = i * i; j < n; j += i) {
                isPrime[j] = false;
            }
        }
    }
    
    for (int i = 2; i < n; ++i) {
        if (isPrime[i]) {
            result.push_back(i);
        }
    }
    
    return result;
}

int main() {
    // Main function code using count_up_to and issame functions
}