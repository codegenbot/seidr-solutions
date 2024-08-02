int pennies, nickels, dimes, quarters;

cin >> pennies;
if(pennies <= 0) {
    cout << "0" << endl << "0" << endl << "0" << endl << "0" << endl;
} else if (pennies < 5) {
    cout << pennies << endl << "1" << endl << "0" << endl << "0" << endl;
} else if (pennies < 25) {
    int numPenny = pennies / 1;
    int remaining = pennies % 1;
    cout << numPenny << endl;
    if(remaining >= 5) {
        int numNickel = remaining / 5;
        remaining = remaining % 5;
        cout << numNickel << endl;
    } else {
        cout << "0" << endl;
    }
    cout << remaining << endl << "0" << endl << "0" << endl;
} else if (pennies < 100) {
    int numPenny = pennies / 25;
    int numQuarter = numPenny;
    int remaining = pennies % 25;
    cout << numQuarter << endl;
    if(remaining >= 5) {
        int numNickel = remaining / 5;
        remaining = remaining % 5;
        cout << numNickel << endl;
    } else {
        cout << "0" << endl;
    }
    cout << remaining << endl << "0" << endl;
} else if (pennies < 250) {
    int numPenny = pennies / 100;
    int numQuarter = (pennies % 100) / 25;
    int remaining = pennies % 25;
    cout << numPenny << endl;
    cout << numQuarter << endl;
    if(remaining >= 5) {
        int numNickel = remaining / 5;
        remaining = remaining % 5;
        cout << numNickel << endl;
    } else {
        cout << "0" << endl;
    }
    cout << remaining << endl;
} else {
    int numPenny = pennies / 250;
    int numQuarter = (pennies % 250) / 25;
    int remaining = pennies % 25;
    cout << numPenny << endl;
    cout << numQuarter << endl;
    if(remaining >= 5) {
        int numNickel = remaining / 5;
        remaining = remaining % 5;
        cout << numNickel << endl;
    } else {
        cout << "0" << endl;
    }
    cout << remaining << endl;
}