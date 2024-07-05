#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

using namespace std;

vector<string> reverse_delete(string s, string c) {
    // Remove characters in c from s
    string result;
    for (char ch : s) {
        if (c.find(ch) == string::npos) {
            result += ch;
        }
    }

    // Check if the resulting string is a palindrome
    string reversed_result = result;
    reverse(reversed_result.begin(), reversed_result.end());
    bool is_palindrome = (result == reversed_result);

    // Return the result string and palindrome check
    return {result, is_palindrome ? "True" : "False"};
}

int main() {
    assert((reverse_delete("mamma", "mia") == vector<string>{"mm", "True"}));
    assert((reverse_delete("hello", "el") == vector<string>{"ho", "False"}));
    cout << "All tests passed!" << endl;
    return 0;
}