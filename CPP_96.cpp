vector<int> issame(vector<int> a, vector<int> b) {
    vector<int> common_elements;
    unordered_set<int> setA(a.begin(), a.end());
    unordered_set<int> setB(b.begin(), b.end());
    
    for (int num : setA) {
        if (setB.count(num)) {
            common_elements.push_back(num);
        }
    }
    
    return common_elements;
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