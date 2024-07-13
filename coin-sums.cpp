int nickels = 0;
while (cents >= 5) {
    cents -= 5;
    nickels++;
}

cout << "Nickels: " << nickels << endl;
if(nickels > 1) cout << "s ";
cout << nickels << " remaining;\n";