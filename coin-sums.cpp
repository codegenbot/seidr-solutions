int nickles = cents / 5;
cents %= 5;

int pennies = cents;
if(pennies > 0) {
    cout << pennies << endl; 
} else {
    pennies = 0; 
}