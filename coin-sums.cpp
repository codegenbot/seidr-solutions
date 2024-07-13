int nickels = 0;
while (cents >= 5) {
    cents -= 5;
    nickels++;
}

cout << "Nickels: " << nickels << "";
if (nickels > 1) cout << "s";
cout << nickels << " remaining;\n";

int pennies = 0;
while (cents >= 1) {
    cents -= 1;
    pennies++;
}

cout << "Pennies: " << pennies << endl;

return 0;