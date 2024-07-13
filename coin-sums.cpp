```cpp
int cents;
cout << "Enter number of cents: ";
cin >> cents;

int pennies = cents % 5;
int nickles = (cents / 5) + pennies / 5;
pennies %= 5;

int dimes = (cents / 10) + pennies / 10;
pennies %= 10;

int quarters = cents / 25;

cout << "Quarters: " << quarters << endl;
cout << "Dimes: " << dimes - quarters * 4 << endl;
cout << "Nickles: " << nickles - dimes * 10 - quarters * 40 << endl;
cout << "Pennies: " << pennies << endl;