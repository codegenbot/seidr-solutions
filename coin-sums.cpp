```
int pennies = cents;
int nickles = pennies / 5;
pennies %= 5;

int dimes = pennies / 10;
pennies %= 10;

int quarters = pennies / 25;
pennies %= 25;

cout << quarters << endl;
cout << dimes << endl;
cout << nickles << endl;
cout << pennies << endl;