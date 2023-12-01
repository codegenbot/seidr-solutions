#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cassert>

using namespace std;

vector<bool> reverse_delete(string s, string c) {
    string result;
    for (int i = 0; i < s.length(); i++) {
        if (c.find(s[i]) == string::npos) {
            result += s[i];
        }
    }
    string reversed = result;
    reverse(reversed.begin(), reversed.end());
    bool isPalindrome = (result == reversed);
    return {isPalindrome};
}

int main() {
    assert(reverse_delete("mamma", "mia") == vector<bool>{true});
    return 0;
}