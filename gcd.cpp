int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, abs(a % b));
}

int main() {
    int a;
    cin >> a;
    int b;
    cin >> b;
    int result = gcd(a, b);
    cout << "GCD: " << result << endl;
    return 0;
}