int pennies = remainingCents;
while (pennies > 4) {
    remainingCents += 5;
    pennies -= 5;
}
cout << quarters << endl; 
cout << dimes << endl; 
cout << nickles << endl; 
cout << pennies << endl;