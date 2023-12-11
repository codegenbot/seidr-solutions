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

int main() {
    int cents, pennies, nickles, dimes, quarters;
    cin >> cents;
    pennies = cents / 1;
    nickles = (cents - pennies) / 5;
    dimes = (cents - pennies - nickles * 5) / 10;
    quarters = (cents - pennies - nickles * 5 - dimes * 10) / 25;
    cout << pennies << " " << nickles << " " << dimes << " " << quarters << endl;
    return 0;
}