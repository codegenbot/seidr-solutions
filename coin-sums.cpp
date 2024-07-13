int main() {
    int n;
    cin >> n;
    
    int q = n / 25;
    n %= 25;
    int d = n / 10;
    n %= 10;
    int n = n / 5;
    int p = n % 5;
    
    cout << q << "\n" << d << "\n" << n << "\n" << p;
    
    return 0;
}