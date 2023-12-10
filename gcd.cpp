
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
/*
Given two integers, return the largest integer that divides each of the integers evenly. Indices of Substring (CW) Given a text string and a target string, return a vector of integers of the indices at which the target appears in the text. If the target string overlaps itself in the text, all indices (including those overlapping) should be returned.
For example,
input:
1
1
output:
1
input:
4
400000
output:
4
input:
54
24
output:
6
input:
4200
3528
output:
168
input:
820000
63550
output:
2050
*/

int gcd(int a, int b) {
    return (b == 0) ? a : gcd(b, a % b);
}

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    for (int i = 0; i < text.size() - target.size() + 1; i++) {
        if (text.substr(i, target.size()) == target) {
            result.push_back(i);
        }
    }
    return result;
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << endl;
    string text, target;
    cin >> text >> target;
    vector<int> indices = indicesOfSubstring(text, target);
    for (int i = 0; i < indices.size(); i++) {
        cout << indices[i] << " ";
    }
    cout << endl;
    return 0;
}