```cpp
int pennies = cents / 1;
cents %= 1;

int nickels = cents / 5;
cents %= 5;

int dimes = cents / 10;
cents %= 10;

int quarters = cents / 25;
cents %= 25;

cout << quarters << endl;  
cout << dimes << endl;      
cout << nickels << endl;    
cout << pennies << endl;