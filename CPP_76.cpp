bool isSimplePower(int x, int n) {
    for (int i = 1; i <= n; i++) {
        if (pow(i, n) == x)
            return true;
    }
    return false;
}

int main() {
    int x, n;
    cout << "Enter a number: ";
    cin >> x;
    cout << "Enter the power: ";
    cin >> n;
    if (isSimplePower(x, n))
        cout << x << " is a simple power of " << n;
    else
        cout << x << " is not a simple power of " << n;
    return 0;
}