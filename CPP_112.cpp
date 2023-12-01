#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>
#include <string>

using namespace std;

vector<string> reverse_delete(string s, string c) {
    string result;
    for (int i = 0; i < s.length(); i++) {
        if (c.find(s[i]) == string::npos) {
            result += s[i];
        }
    }
    string reversed = result;
    reverse(reversed.begin(), reversed.end());
    bool isPalindrome = (result == reversed);
    return {result};
}

int main() {
    assert(reverse_delete("mamma", "mia") == vector<string>{"mam"});
    return 0;
}