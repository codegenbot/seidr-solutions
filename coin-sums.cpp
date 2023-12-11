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
    int n, pennies = 0, nickles = 0, dimes = 0, quarters = 0;
    cin >> n;
    while (n > 0) {
        if (n >= 25) {
            quarters++;
            n -= 25;
        } else if (n >= 10) {
            dimes++;
            n -= 10;
        } else if (n >= 5) {
            nickles++;
            n -= 5;
        } else {
            pennies++;
            n--;
        }
    }
    cout << quarters << " " << dimes << " " << nickles << " " << pennies << endl;
    return 0;
}