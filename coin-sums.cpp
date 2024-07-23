int main() {
    int cents;
    cin >> cents;
    
    int quarters = cents / 25;
    int dimes = (cents % 25) / 10;
    int nickles = ((cents % 25) % 10) / 5;
    int pennies = ((cents % 25) % 10) % 5;

    cout << pennies << endl;
    cout << nickles << endl;
    cout << dimes << endl;
    cout << quarters << endl;

    return 0;
}