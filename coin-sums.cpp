int main() {
    int n;
    cin >> n;
    int quarter = n / 25;
    n = n % 25;
    int dime = n / 10;
    n = n % 10;
    int nickel = n / 5;
    n = n % 5;
    int penny = n;
    
    cout << penny << endl;
    cout << nickel << endl;
    cout << dime << endl;
    cout << quarter << endl;
    
    return 0;
}