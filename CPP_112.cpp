#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool issame(vector<string> a, vector<string> b) {
    vector<string> reverse_delete(string s, string c) {
        vector<string> result = "";
        for (char ch : s) {
            if (c.find(ch) == string::npos) {
                result += ch;
            }
        }
        string reversed = result;
        reverse(reversed.begin(), reversed.end());
        return {result, result == reversed ? "True" : "False"};
    }
}