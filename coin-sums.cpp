```cpp
int pennies = cents % 5;
cents /= 5;

int nickles = cents % 10;
cents /= 10;

int dimes = cents % 20;
cents /= 20;

int quarters = cents;

cout << quarters << endl;
cout << dimes << endl;
cout << nickles << endl;
cout << pennies << endl;