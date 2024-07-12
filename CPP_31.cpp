bool is_prime(long long n) {
    if (n <= 1) {
        return false;
    }
    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    long long num;
    cin >> num;
    if (is_prime(num)) {
        cout << "Prime";
    } else {
        cout << "Not Prime";
    }
    return 0;
}