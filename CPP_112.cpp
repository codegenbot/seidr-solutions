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

    for(char ch : s) {
        if(to_delete.find(ch) == to_delete.end()) {
            result += ch;
        }
    }

    string reversed_result = result;
    reverse(reversed_result.begin(), reversed_result.end());
    bool is_palindrome = (result == reversed_result);

    vector<string> output;
    output.push_back(result);
    output.push_back(is_palindrome ? "True" : "False");

    return output;
}

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    assert(issame(reverse_delete("mamma", "mia"), {"mm", "True"}));
    return 0;
}