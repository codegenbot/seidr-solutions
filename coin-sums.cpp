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
    int cents;
    cin >> cents;
    vector<int> coins(4, 0);
    while (cents > 0) {
        if (cents >= 25) {
            coins[3]++;
            cents -= 25;
        } else if (cents >= 10 && cents < 25) {
            coins[2]++;
            cents -= 10;
        } else if (cents >= 5 && cents < 10) {
            coins[1]++;
            cents -= 5;
        } else if (cents < 5) {
            coins[0]++;
            cents = 0;
        }
    }
    cout << coins[0] << " " << coins[1] << " " << coins[2] << " " << coins[3] << endl;
    return 0;
}