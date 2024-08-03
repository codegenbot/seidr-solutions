int modp(int n, int p) {
    int result = 1;
    n = n % p;
    while (p > 0) {
        if (p % 2 == 1) {
            result = (result * n) % p;
        }
        n = (n * n) % p;
        p = p / 2;
    }
    return result;
}

int main() {
    int n, p;
    std::cin >> n >> p;
    std::cout << modp(n, p) << std::endl;
    return 0;
}