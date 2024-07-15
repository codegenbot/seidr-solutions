```c++
int pennies = cents;
int quarters = 0;
int dimes = 0;
int nickles = 0;

while (pennies >= 25) {
    quarters++;
    pennies -= 25;
}

while (pennies >= 10) {
    dimes++;
    pennies -= 10;
}

while (pennies >= 5) {
    nickles++;
    pennies -= 5;
}

cout << quarters << endl;
cout << nickles << endl;
cout << dimes << endl;
cout << pennies << endl;