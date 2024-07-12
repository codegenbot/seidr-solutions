int main() {
    int n;
    cin >> n;
    int quarters = n / 25;
    n %= 25;
    int dimes = n / 10;
    n %= 10;
    int nickles = n / 5;
    int pennies = n % 5;
    
    cout << pennies << endl;
    cout << nickles << endl;
    cout << dimes << endl;
    cout << quarters << endl;
    
    return 0;
}