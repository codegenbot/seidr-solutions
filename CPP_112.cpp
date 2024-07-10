#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

using namespace std;

vector<string> reverse_delete(string s, string c) {
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    transform(c.begin(), c.end(), c.begin(), ::tolower);

    string result = "";
    vector<bool> seen(26, false); // assuming only lowercase alphabets
    for (char ch : c) {
        if (isalpha(ch) && !seen[ch - 'a']) {
           seen[ch - 'a'] = true;
           result += ch;
        }
    }
    string reversed = result;
    reverse(reversed.begin(), reversed.end());
    bool palindromeCheck = result == reversed;
    return {result, palindromeCheck};
}