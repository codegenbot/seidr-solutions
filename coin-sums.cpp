```
int pennies = cents;
cout << "Quarters: " << cents / 25 << endl;
cents %= 25;
cout << "Dimes: " << cents / 10 << endl;
cents %= 10;
cout << "Nickles: " << cents / 5 << endl;
cout << "Pennies: " << cents % 5 << endl;