bool issame(int n, int m){
    return n == m;
}

vector<int> count_up_to(int n);

int main() {
    int n;
    cin >> n;
    vector<int> primes = count_up_to(n);
    for (int prime : primes) {
        cout << prime << " ";
    }
    return 0;
}

vector<int> count_up_to(int n) {
    vector<int> primes;
    for (int i = 2; i < n; ++i) {
        bool is_prime = true;
        for (int j = 2; j * j <= i; ++j) {
            if (i % j == 0 || issame(i, j)) {
                is_prime = false;
                break;
            }
        }
        if (is_prime) {
            primes.push_back(i);
        }
    }
    return primes;
}