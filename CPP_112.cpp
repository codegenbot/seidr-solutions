#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>
#include <algorithm>
#include <cassert>

using namespace std;

vector<string> reverse_delete(string s, string c) {
    unordered_set<char> to_delete(c.begin(), c.end());
    string result;
    for (char ch : s) {
        if (to_delete.find(ch) == to_delete.end()) {
            result += ch;
        }
    }
    string reversed_result = result;
    reverse(reversed_result.begin(), reversed_result.end());
    bool is_palindrome = (result == reversed_result);
    return {result, is_palindrome ? "True" : "False"};
}

bool issame(const vector<string>& a, const vector<string>& b) {
    return a == b;
}

int main() {
    assert(issame(reverse_delete("mamma", "mia"), {"mma", "False"}));
    cout << "All tests passed!" << endl;
    return 0;
}