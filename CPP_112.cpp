#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool issame(vector<string> a, vector<string> b) {
vector<string> reverse_delete(string s, string c) {
    vector<string> result = {""};
    for (char ch : s) {
        if (c.find(ch) == string::npos) {
            result[0] += ch;
        }
    }
    vector<string> reversed = result;
    reverse(reversed[0].begin(), reversed[0].end());
    return {result[0], result[0] == reversed[0] ? "True" : "False"};
}