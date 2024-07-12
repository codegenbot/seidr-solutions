int main() {
    int n;
    cin >> n;
    int pennies = n % 5;
    n /= 5;
    cout << pennies << endl;
    cout << n % 2 << endl;
    n /= 2;
    cout << n % 2 << endl;
    n /= 2;
    cout << n << endl;
    return 0;
}