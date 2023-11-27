#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

using namespace std;

vector<string> reverse_delete(string s, string c) {
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (c.find(s[i]) == string::npos) {
            result += s[i];
        }
    }
    string reversed = result;
    reverse(reversed.begin(), reversed.end());
    bool isPalindrome = (result == reversed);
    vector<string> output;
    output.push_back(result);
    output.push_back(isPalindrome ? "True" : "False");
    return output;
}

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    assert(reverse_delete("mamma", "mia") == vector<string>{"", "True"});

    return 0;
}