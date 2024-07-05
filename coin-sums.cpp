int main() {
    int cents;
    cin >> cents;

    if (cents < 0) {
        cout << "Error: Please enter a non-negative integer.\n";
        return -1;
    }

    int quarters = cents / 25, quarterRemainder = cents % 25;
    while (quarterRemainder >= 25) {
        quarters++;
        quarterRemainder -= 25;
    }
    if (quarterRemainder < 10) { 
        dimes = 0;
    } else {
        int dimes = quarterRemainder / 10, dimeRemainder = quarterRemainder % 10;
        while (dimeRemainder >= 10) {
            dimes++;
            dimeRemainder -= 10;
        }
        if (dimeRemainder < 5) { 
            nickles = 0;
        } else {
            int nickles = dimeRemainder / 5, nickelRemainder = dimeRemainder % 5;
            while (nickelRemainder >= 5) {
                nickles++;
                nickelRemainder -= 5;
            }
            pennies = nickelRemainder; 
        }
    } else { 
        int dimes = quarterRemainder / 10, dimeRemainder = quarterRemainder % 10;
        while (dimeRemainder >= 10) {
            dimes++;
            dimeRemainder -= 10;
        }
        if (dimeRemainder < 5) { 
            nickles = 0;
        } else {
            int nickles = dimeRemainder / 5, nickelRemainder = dimeRemainder % 5;
            while (nickelRemainder >= 5) {
                nickles++;
                nickelRemainder -= 5;
            }
            pennies = nickelRemainder; 
        }
    }

    cout << quarters << "\n";
    cout << dimes << "\n";
    cout << nickles << "\n";
    cout << pennies << "\n";

    return 0;
}