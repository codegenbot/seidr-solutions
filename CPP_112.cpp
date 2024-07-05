#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> reverse_delete(string s, string c) {
    // Remove characters in s that are in c
    for (char ch : c) {
        s.erase(remove(s.begin(), s.end(), ch), s.end());
    }

    // Check if the resulting string is a palindrome
    string reversed_s = s;
    reverse(reversed_s.begin(), reversed_s.end());
    bool is_palindrome = (s == reversed_s);

    // Return the result string and palindrome check as "True" or "False"
    return {s, is_palindrome ? "True" : "False"};
}

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    assert (issame(reverse_delete("mamma", "mia"), {"mm", "False"}));
    return 0;
}