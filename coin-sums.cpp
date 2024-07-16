int pennies = cents;
if (pennies >= 25) {
    int quarters = pennies / 25;
    pennies %= 25;
}
int nickels = pennies / 5;
if (nickels * 5 <= pennies) {
    pennies %= 5;
}
int dimes = pennies / 10;
cout << "Quarters: " << quarters << endl;
cout << "Dimes: " << dimes << endl;
cout << "Nickels: " << nickels - (pennies / 5) << endl;
cout << "Pennies: " << pennies << endl;