```
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

vector<int> check_primes(vector<int> primes, int n) {
    vector<int> evenPrimes;
    for(int prime : primes) {
        bool isEven = (prime % 2 == 0);
        if(isEven && prime <= n)
            evenPrimes.push_back(prime);
    }
    return evenPrimes;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    vector<int> primes = count_up_to(n);
    vector<int> even_primes = check_primes(primes, n);
    cout << "Even Prime numbers up to " << n << ":";
    for(int prime : even_primes) {
        cout << " " << prime;
    }
    cout << endl;
    return 0;
}