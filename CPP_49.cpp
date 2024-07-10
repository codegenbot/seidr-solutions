int modp(int n, int p) {
    int result = 1;
    while (n > 0) {
        if (n % 2 == 1) {
            result = (result * n) % p;
        }
        n = (n * n) % p;
    }
    return result;
}

int main() {
    int n, p;
    cin >> n;
    cin >> p;
    cout << modp(n, p) << endl;
    return 0;
}