int main() {
    int n;
    cin >> n;
    
    cout << n % 25 << endl;
    cout << (n % 25) / 10 << endl;
    cout << ((n % 25) % 10) / 5 << endl;
    cout << ((n % 25) % 10) % 5 << endl;
    
    return 0;
}