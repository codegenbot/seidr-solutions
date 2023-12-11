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

vector<int> indicesOfSubstring(const string& text, const string& target) {
    vector<int> result;
    int i = 0;
    while (i <= text.length() - target.length()) {
        if (text.substr(i, target.length()) == target) {
            result.push_back(i);
        }
        i++;
    }
    return result;
}

int main() {
    string text, target;
    cin >> text >> target;
    vector<int> indices = indicesOfSubstring(text, target);
    for (int i = 0; i < indices.size(); i++) {
        cout << indices[i] << " ";
    }
    return 0;
}