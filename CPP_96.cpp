bool issame(vector<int> a, vector<int> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

int count_up_to(int n) {
    int count = 0;
    vector<bool> isPrime(n, true);
    for(int p = 2; p * p < n; p++) {
        if(isPrime[p]) {
            for(int i = p * p; i < n; i += p) {
                isPrime[i] = false;
            }
        }
    }

    for(int i = 2; i < n; i++) {
        if(isPrime[i]) {
            count++;
        }
    }

    return count;
}