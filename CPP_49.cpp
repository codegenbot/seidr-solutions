int modp(int n, int p) {
    if (p == 1) return 0;
    int result = 1;
    n = n % p;
    while (n > 0) {
        if (n % 2 == 1) {
            result = (result * n) % p;
        }
        n = (n * n) % p;
    }
    return result;
}

int main() {
    int n = 5; // Example input value for n
    int p = 3; // Example input value for p
    int result = modp(n, p);
    cout << "Result: " << result << endl;
    return 0;
}