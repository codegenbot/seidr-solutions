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
    if (a == 0) return b;
    return gcd(b % a, a);
}
vector<int> findSubstringIndices(const string& text, const string& target) {
    vector<int> indices;
    for (int i = 0; i < text.length() - target.length() + 1; ++i) {
        int j = 0;
        while (j < target.length()) {
            if (text[i + j] != target[j]) break;
            ++j;
        }
        if (j == target.length()) indices.push_back(i);
    }
    return indices;
}
int main() {
    int a, b;
    while (cin >> a >> b) {
        cout << gcd(a, b) << endl;
        vector<int> indices = findSubstringIndices(to_string(a), to_string(b));
        for (int i : indices) {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}