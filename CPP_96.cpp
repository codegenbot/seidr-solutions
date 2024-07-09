vector<int> issame(vector<int> a, vector<int> b) {
    vector<int> same_elements;
    unordered_set<int> set_a(a.begin(), a.end());

    for (int num : b) {
        if (set_a.count(num)) {
            same_elements.push_back(num);
        }
    }

    return same_elements;
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