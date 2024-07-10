#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int quarters = n / 25;
    n = n % 25;
    int dimes = n / 10;
    n = n % 10;
    int nickels = n / 5;
    int pennies = n % 5;

    cout << pennies << endl;
    cout << nickels << endl;
    cout << dimes << endl;
    cout << quarters << endl;

    return 0;
}