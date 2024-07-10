#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

using namespace std;

vector<string> reverse_delete(string s, string c) {
    string result = "";
    vector<bool> seen(26, false); // assuming only lowercase alphabets
    for (char ch : c) {
        if (!seen[ch - 'a']) {
           seen[ch - 'a'] = true;
           result += ch;
        }
    }
    string reversed = result;
    reverse(reversed.begin(), reversed.end());
    string palindromeCheck = result == reversed ? "True" : "False";
    return {result, palindromeCheck};
}