#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool issame(vector<string> a, vector<string> b) {
}

vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    for (char ch : s) {
        if (c.find(ch) == string::npos) {
            result.push_back(string(1, ch));
        }
    }
    string reversed = accumulate(result.rbegin(), result.rend(), string(""));
    return {reversed, result == reversed ? "True" : "False"};
}