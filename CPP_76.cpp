bool isSimplePower(int x, int n) {
    double y = pow(n, ceil(log2(x)));
    if (y == x) {
        cout << "The number is a simple power." << endl;
    } else {
        cout << "The number is not a simple power." << endl;
    }
}

int main() {
    int x, n;
    cout << "Enter the base number: ";
    cin >> n;
    cout << "Enter the power: ";
    cin >> x;
    isSimplePower(x, n);
    return 0;
}