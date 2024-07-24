int main() {
    int n;
    cin >> n;
    int quarters = n / 25;
    n -= quarters * 25;
    int dimes = n / 10;
    n -= dimes * 10;
    int nickels = n / 5;
    n -= nickels * 5;
    
    cout << n << endl << nickels << endl << dimes << endl << quarters << endl;
    
    return 0;
}