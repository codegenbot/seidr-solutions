int main {
    int n, count = 0;
    cin >> n;

    bool is_prime(int n) {
        if (n <= 1)
            return false;
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0)
                return false;
        }
        return true;
    }

    int main {
        int count = 0;
        cout << "Enter a number: ";
        cin >> n;

        for (int i = 2; i <= n; i++) {
            if (is_prime(i)) {
                cout << i << " ";
                count++;
            }
        }
        cout << endl;
        cout << "Number of primes less than or equal to " << n << ": " << count << endl;
    }