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

    vector<string> output;
    output.push_back(result);
    output.push_back(is_palindrome ? "True" : "False");

    return output;
}

int main() {
    string s, c;
    cin >> s >> c;
    vector<string> result = reverse_delete(s, c);
    for (const string& str : result) {
        cout << str << endl;
    }
    return 0;
}