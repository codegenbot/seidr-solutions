```
#include<iostream>
#include<string>
using namespace std;

int fruit_distribution(string s, int n) {
    int apples = 0, oranges = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'a') {
            apples++;
        } else if (s[i] == 'o') {
            oranges++;
        }
    }
    return n - apples - oranges;
}
```