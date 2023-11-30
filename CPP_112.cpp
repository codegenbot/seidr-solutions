#include <string>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<string> reverse_delete(string s, string c);

bool issame(vector<string> a, vector<string> b) {
    return (a == b);
}

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
    // Test the code
    vector<string> expected = {"hello", "False"};
    vector<string> actual = reverse_delete("hello", "abc");
    assert(issame(expected, actual));

    expected = {"racecar", "True"};
    actual = reverse_delete("racecar", "aeiou");
    assert(issame(expected, actual));

    expected = {"cppcontest", "False"};
    actual = reverse_delete("cppcontest", "aeiou");
    assert(issame(expected, actual));

    expected = {"", "True"};
    actual = reverse_delete("madam", "madam");
    assert(issame(expected, actual));

    return 0;
}