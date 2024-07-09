#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

bool issame(vector<string> a, vector<string> b) {
}

vector<string> reverse_delete(string s, string c) {
    string result = "";
    for(char ch : s) {
        if(c.find(ch) == string::npos) {
            result += ch;
        }
    }
    string result_reversed = result;
    reverse(result_reversed.begin(), result_reversed.end());
    
    return {result, (result == result_reversed) ? "True" : "False"};
}