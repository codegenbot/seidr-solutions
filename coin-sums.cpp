int pennies = cents % 4;
cents /= 4;

int quarters = cents / 25;
cents %= 25;

int dimes = cents / 10;
cents %= 10;

int nickels = cents / 5;
cents %= 5;

cout << "Pennies: " << pennies << endl;
cout << "Nickles: " << nickels << endl;
cout << "Dimes: " << dimes << endl;
cout << "Quarters: " << quarters << endl;