vector<int> count_up_to(int n) {
    vector<int> primes;
    for (int i = 2; i <= n; ++i) {
        bool isPrime = true;
        if(i == 2)
            primes.push_back(i);
        else if(i > 2) {
            for (int j = 2; j * j <= i; ++j) {
                if (i % j == 0) {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime) {
                primes.push_back(i);
            }
        }
    }
    return primes;
}

bool operator==(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    vector<int> primes = count_up_to(n);
    vector<int> otherPrimes = count_up_to(n+1);
    if (primes == otherPrimes) {
        cout << "The result is the same.\n";
    } else {
        cout << "The result is different.\n";
    }
    return 0;
}