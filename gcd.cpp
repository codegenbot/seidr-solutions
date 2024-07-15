int main() {
    int a, b;
    cin >> a >> b;
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    cout << "GCD: " << a << endl;

    return 0;
}