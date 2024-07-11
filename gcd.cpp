int gcd(int a, int b) {
    while (b != 0)
        a %= b;
    return a;
}

int main() {
    return 0;
}