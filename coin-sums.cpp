#include <vector>
#include <iostream>
#include <string>
#include <cstring>
#include <queue>
#include <stdio.h>
#include <math.h>
#include <map>
#include <set>
#include <stack>
#include <climits>
using namespace std;

int main()
{
    int cents, pennies, nickles, dimes, quarters;
    cin >> cents;

    // Initialize the number of coins to 0
    pennies = 0;
    nickles = 0;
    dimes = 0;
    quarters = 0;

    while (cents > 0) {
        if (cents >= 25) {
            cents -= 25;
            quarters++;
        } else if (cents >= 10) {
            cents -= 10;
            dimes++;
        } else if (cents >= 5) {
            cents -= 5;
            nickles++;
        } else {
            pennies += cents;
            cents = 0;
        }
    }

    cout << "Pennies: " << pennies << endl;
    cout << "Nickles: " << nickles << endl;
    cout << "Dimes: " << dimes << endl;
    cout << "Quarters: " << quarters << endl;

    return 0;
}