int pennies = 0;
int nickles = 0;
int dimes = 0;
int quarters = 0;

while (cents >= 25) {
    quarters++;
    cents -= 25;
}

while (cents >= 10) {
    dimes++;
    cents -= 10;
}

while (cents >= 5) {
    nickles++;
    cents -= 5;
}

pennies = cents;

cout << quarters << endl;
cout << dimes << endl;
cout << nickles << endl;
cout << pennies << endl;