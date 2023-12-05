```
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

int gcd(int a, int b) {
    if (a == 0) return b;
    return gcd(b % a, a);
}

vector<int> indicesOfSubstring(const string& text, const string& target) {
    vector<int> result;
    for (int i = 0; i < text.size() - target.size() + 1; ++i) {
        if (text.substr(i, target.size()) == target) {
            result.push_back(i);
        }
    }
    return result;
}

int main() {
    string input;
    while (getline(cin, input)) {
        int a = stoi(input.substr(0, input.find(' ')));
        int b = stoi(input.substr(input.find(' ') + 1));
        cout << gcd(a, b) << endl;
    }
    return 0;
}
```