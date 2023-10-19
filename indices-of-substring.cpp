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
    string text, target;
    getline(cin, text);
    getline(cin, target);
    if (text.length() < target.length()) {
        cout << 0 << endl;
    }
    else {
        cout << text.length() - target.length() + 1 << endl;
    }
    return 0;
}
