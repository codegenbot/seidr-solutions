```cpp
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
    cout << "Enter the number: ";
    cin >> n;
    vector<int> primes = count_up_to(n);
    vector<int> checkPrimes(1); // dummy prime
    if (primes == checkPrimes) {
        cout << "No prime found.\n";
    } else {
        cout << "Primes up to " << n << ": ";
        for(int i: primes) {
            cout << i << " ";
        }
        cout << endl;
    }
}