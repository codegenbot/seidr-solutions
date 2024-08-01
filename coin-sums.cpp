int pennies = cents / 1;
int quarters = cents / 25;
cents %= 25; // now handle remaining cents for nickles and dimes

int nickles = cents / 5;
cents %= 5; // now handle remaining cents for pennies

int dimes = cents / 10;
pennies = cents % 10; // leftover cents are just pennies

cout << quarters << endl;
cout << nickles << endl;
cout << dimes << endl;
cout << pennies << endl;