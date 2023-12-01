#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cassert>

using namespace std;

pair<string, string> reverse_delete(string s, string c) {
    string result;
    for (int i = 0; i < s.length(); i++) {
        if (c.find(s[i]) == string::npos) {
            result += s[i];
        }
    }
    string reversed = result;
    reverse(reversed.begin(), reversed.end());
    bool isPalindrome = (result == reversed);
    return make_pair(result, (isPalindrome ? "True" : "False"));
}

int main() {
    auto result = reverse_delete("mamma", "mia");
    cout << result.first << endl;
    cout << result.second << endl;
    return 0;
}