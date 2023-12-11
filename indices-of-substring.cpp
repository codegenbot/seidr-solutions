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
    for (size_t i = 0; i < text.length(); ++i) {
        if (text[i] == target[0]) {
            size_t j = 1;
            while (j < target.length() && text[i + j] == target[j]) {
                ++j;
            }
            if (j == target.length()) {
                result.push_back(i);
            }
        }
    }
    return result;
}

int main() {
    string text, target;
    cin >> text >> target;
    vector<int> indices = indicesOfSubstring(text, target);
    for (size_t i = 0; i < indices.size(); ++i) {
        cout << indices[i] << " ";
    }
    return 0;
}