#include <vector>
#include <iostream>
#include <cstring>
#include <queue>
#include <stdio.h>
#include <math.h>
#include <map>
#include <set>
#include <stack>
#include <climits>
using namespace std;

vector<int> coinSums(int cents) {
    vector<int> coins;
    while (cents > 0) {
        if (cents >= 25) {
            coins.push_back(cents / 25);
            cents %= 25;
        } else if (cents >= 10) {
            coins.push_back(cents / 10);
            cents %= 10;
        } else if (cents >= 5) {
            coins.push_back(cents / 5);
            cents %= 5;
        } else {
            coins.push_back(cents);
            break;
        }
    }
    return coins;
}
```
