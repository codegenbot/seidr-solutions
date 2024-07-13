int main() {
    int cents;
    cin >> cents;

    int quarters = cents / 25; 
    cents %= 25;

    cout << quarters << endl; 

    int dimes = cents / 10;
    cents %= 10;

    cout << dimes << endl; 

    int nickels = cents / 5;
    cents %= 5;

    cout << nickels << endl; 

    cout << cents << endl; // pennies

    return 0;
}