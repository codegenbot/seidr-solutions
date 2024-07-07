```cpp
int main() {
    int cents;
    cin >> cents;

    double quarters = cents / 25.0;
    cents %= 25;

    int dimes = static_cast<int>(cents / 10);
    cents %= 10;

    int nickles = static_cast<int>(cents / 5);
    cents %= 5;

    int pennies = static_cast<int>(cents);

    cout << quarters << endl;
    cout << dimes << endl;
    cout << nickles << endl;
    cout << pennies << endl;

    return 0;
}