```cpp
int main() {
    int cents;
    cin >> cents;
    
    if(cents < 0) {
        cout << "Error: Please enter a non-negative integer.\n";
        return -1;
    }
    
    int quarters = cents / 25;
    cents %= 25;
    
    while (cents >= 25) {
        int new_quarters = min(cents / 25, 1);
        quarters += new_quarters;
        cents -= new_quarters * 25;
    }
    
    int dimes = cents / 10;
    cents %= 10;
    
    int nickles = cents / 5;
    cents %= 5;
    
    while (cents >= 5) {
        int new_nickles = min(cents / 5, 1);
        nickles += new_nickles;
        cents -= new_nickles * 5;
    }
    
    int pennies = cents;
    
    cout << "Quarters: " << quarters << " coins\n";
    cout << "Dimes: " << dimes << " coins\n";
    cout << "Nickles: " << nickles << " coins\n";
    cout << "Pennies: " << pennies << " coins\n";

    return 0;
}