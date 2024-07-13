int main() {
    int n, num1, num2, target;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> num1 >> num2 >> target;
        if (num1 + num2 == target) {
            cout << num1 << endl << num2 << endl;
            break;
        }
    }
    return 0;
}