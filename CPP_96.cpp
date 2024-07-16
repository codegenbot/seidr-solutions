vector<int> count_up_to(int n) {
    vector<int> primes;
    for (int i = 2; i < n; ++i) {
        bool is_prime = true;
        for (int j = 2; j * j <= i; ++j) {
            if (i % j == 0) {
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

int main() {
    int n = 20;
    vector<int> a = count_up_to(n);
    vector<int> b = {2, 3, 5, 7, 11, 13, 17, 19};
    assert(a == b);
    return 0;
}