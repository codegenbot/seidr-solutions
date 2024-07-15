```c++
int pennies = cents;
cout << pennies / 25 << endl; // Quarters
pennies %= 25;

cout << pennies / 10 << endl; // Dimes
pennies %= 10;

cout << pennies / 5 << endl; // Nickles
pennies %= 5;

cout << pennies << endl; // Pennies