int pennies = cents;

    cout << "Coins: " << quarters << " quarter" << (quarters > 1 ? "s" : "") << endl;
    
    if(quarters > 0) {
        cout << (quarters == 1 ? "" : "s ") << quarters - 1 << " remaining\n";
    }
    
    cout << "Dimes: " << dimes << endl;
    if(dimes > 0) {
        cout << (dimes == 1 ? "" : "s ") << dimes << " remaining\n";
    }
    
    int remain = cents % 10;
    pennies = remain;

    cout << "Nickels: " << nickels << endl;
    if(nickels > 0) {
        cout << (nickels == 1 ? "" : "s ") << nickels - 1 << " remaining\n";
    }
    
    cout << "Pennies: " << pennies;