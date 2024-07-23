```cpp
int main() {
    int cents;
    cin >> cents;

    int pennies = cents / 1; 
    int nickels = cents / 25; 
    int remainder = cents % 25;
    int dimes = remainder / 10; 
    remainder %= 10;
    quarters = remainder / 25; 

    cout << "Pennies: " << pennies << endl;
    cout << "Nickels: " << nickels << endl;
    cout << "Dimes: " << dimes << endl;
    cout << "Quarters: " << quarters << endl;

    return 0;
}