vector<int> issame(vector<int> x, vector<int> y) {
    vector<int> result;
    for (int i = 0; i < x.size(); ++i) {
        for (int j = 0; j < y.size(); ++j) {
            if (x[i] == y[j]) {
                result.push_back(x[i]);
                break;
            }
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
    vector<int> vec1 = {1, 2, 3, 4, 5};
    vector<int> vec2 = {3, 4, 5, 6, 7};
    
    vector<int> same_elements = issame(vec1, vec2);
    vector<int> primes_up_to_10 = count_up_to(10);
    
    return 0;
}