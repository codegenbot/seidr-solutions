#include <iostream>
using namespace std;

int cents;
int pennies = 0;
int nickels = 0;
int dimes = 0;
int quarters = 0;

cin >> cents;

while (cents >= 25) {
    cents -= 25;
    quarters++;
}

while (cents >= 10) {
    cents -= 10;
    dimes++;
}

while (cents >= 5) {
    cents -= 5;
    nickels++;
}

while (cents >= 1) {
    cents -= 1;
    pennies++;
}

cout << "Quarters: " << quarters << endl;
cout << "Dimes: " << dimes << endl;
cout << "Nickels: " << nickels << endl;
cout << "Pennies: " << pennies << endl;