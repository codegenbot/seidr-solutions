long long gcd(long long a, long long b) {
    if (b == 0)
        return a;
    else
        return gcd(a % b, b);
}

int main() {
    cout << gcd(48, 18);  
    return 0;
}