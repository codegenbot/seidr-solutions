int main() {
    int cents;
    cin >> cents;

    int pennies = cents / 100;
    cents %= 100; 

    int nickles = cents / 25;
    cents %= 25;  

    int dimes = cents / 10;
    cents %= 10;  

    int quarters = cents / 5;

    cout << pennies << endl;
    cout << nickles << endl;
    cout << dimes << endl;
    cout << quarters << endl;
    
    return 0;
}