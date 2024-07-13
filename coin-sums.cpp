int nickels = 0;
while (cents >= 5) {
    cents -= 5;
    nickels++;
}

cout << "Nickels: " << nickels << (nickels > 1 ? "s" : "") << endl;
if(nickels > 1) cout << "s ";