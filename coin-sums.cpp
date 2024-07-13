int pennies = 0;
int nickels = 0;
int dimes = 0;
int quarters = 0;

while (cents > 0) {
    if (cents >= 25) {
        quarters++;
        cents -= 25;
    } else if (cents >= 10) {
        dimes++;
        cents -= 10;
    } else if (cents >= 5) {
        nickels++;
        cents -= 5;
    } else {
        pennies = cents;
        break;
    }
}

cout << quarters << endl;
cout << dimes << endl;
cout << nickels << endl;
cout << pennies << endl;