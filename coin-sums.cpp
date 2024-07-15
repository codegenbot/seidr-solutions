```cpp
int main() {
    int cents;
    cin >> cents;

    int quarters = 0;
    while (cents >= 25) {
        cents -= 25;
        ++quarters;
    }

    int dimes = 0;
    while (cents >= 10) {
        cents -= 10;
        ++dimes;
    }

    int nickles = 0;
    while (cents >= 5) {
        cents -= 5;
        ++nickles;
    }

    int pennies = cents;

    cout << quarters << " quarter" << (quarters > 1 ? "s" : "") << endl;
    cout << dimes << " dime" << (dimes > 1 ? "s" : "") << endl;
    cout << nickles << " nickel" << (nickles > 1 ? "s" : "") << endl;
    cout << pennies << " penny" << (pennies > 1 ? "s" : "") << endl;

    return 0;
}