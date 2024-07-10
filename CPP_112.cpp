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

int main() {
    string s = "hello";
    string c = "world";
    vector<string> output = reverse_delete(s, c);
    for (const string& str : output) {
        cout << str << " ";
    }
    return 0;
}