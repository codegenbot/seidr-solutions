int remain_cents = cents;
int quarters = 0;
while (remain_cents >= 25) {
    quarters++;
    remain_cents -= 25;
}

int dimes = 0;
int remain_dimes = remain_cents;
while (remain_dimes >= 10) {
    dimes++;
    remain_dimes -= 10;
}

int nickles = 0;
int remain_nickles = remain_dimes;
while (remain_nickles >= 5) {
    nickles++;
    remain_nickles -= 5;
}

int pennies = 0;
pennies = remain_nickles;

cout << quarters << endl;
cout << dimes << endl;
cout << nickles << endl;
cout << pennies << endl;