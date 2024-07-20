int pennies = cents;
cout << quarters << endl;  
cout << dimes << endl;      
cout << nickels << endl;    
pennies %= 5; // update pennies
for (int i = 0; i < pennies; ++i) {
    cout << "1";          
}
cout << endl;