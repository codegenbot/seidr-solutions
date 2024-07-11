```cpp
int main() {
    int cents;
    cin >> cents;

    int max_quarters = min(cents / 25, (cents + 24) / 25); 
    int quarters = max_quarters;
    cents %= 25;

    int max_dimes = min(cents / 10, (cents + 9) / 10);
    dimes = max_dimes;
    cents %= 10;

    int nickles = min(cents / 5, (cents + 4) / 5);
    cents %= 5;

    int pennies = cents;

    cout << quarters << endl;
    cout << dimes << endl;
    cout << nickles << endl;
    cout << pennies << endl;

    return 0;
}