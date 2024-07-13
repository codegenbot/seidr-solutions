int pennies = cents;
quarters = 0; dimes = 0; nickles = 0;

while(pennies >= 25) {
    quarters++;
    pennies -= 25;
}
while(pennies >= 10) {
    dimes++;
    pennies -= 10;
}
while(pennies >= 5) {
    nickles++;
    pennies -= 5;
}

cout << quarters << endl; 
cout << dimes << endl;   
cout << nickles << endl;      
cout << pennies << endl;