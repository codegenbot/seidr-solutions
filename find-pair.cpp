int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, target;
        cin >> a >> b >> target;
        
        if (a + b == target) {
            cout << a << "\n" << b << endl;
        }
    }
    return 0;
}