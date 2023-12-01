#include <iostream>
#include <vector>
#include <algorithm>
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
    return {result, (isPalindrome ? "True" : "False")};
}

int main() {
    // Example test case
    vector<string> output = reverse_delete("mamma", "mia");
    vector<string> expected = {"", "True"};
    bool isSame = (output == expected);
    assert(isSame);
    return 0;
}