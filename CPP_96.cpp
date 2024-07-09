vector<int> issame (vector<int> a, vector<int> b) {
    vector<int> res(2);

    if (a == b)
        res[0] = 1;
    else
        res[1] = 1;

    return res;
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
    int n = 20;
    vector<int> primes = count_up_to(n);
    
    vector<int> result = issame(primes, primes);
    
    return 0;
}