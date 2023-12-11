```
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int fruit_distribution(string s, int n) {
    int apples = 0, oranges = 0;
    stringstream ss(s);
    while (ss >> s) {
        if (s == "apples") {
            ss >> apples;
        } else if (s == "oranges") {
            ss >> oranges;
        }
    }
    return n - apples - oranges;
}
```