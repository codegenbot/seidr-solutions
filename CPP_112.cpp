#include <iostream>
#include <vector>
#include <unordered_set>
#include <string>
#include <algorithm>

using namespace std;

vector<string> reverse_delete(string s, string c) {
    unordered_set<char> to_delete(c.begin(), c.end());
    string filtered;
    for (char ch : s) {
        if (to_delete.find(ch) == to_delete.end()) {
            filtered.push_back(ch);
        }
    }
    string reversed_filtered = filtered;
    reverse(reversed_filtered.begin(), reversed_filtered.end());
    bool is_palindrome = (filtered == reversed_filtered);
    return {filtered, is_palindrome ? "True" : "False"};
}

int main() {
    string s, c;
    cin >> s >> c;
    vector<string> result = reverse_delete(s, c);
    cout << result[0] << endl << result[1] << endl;
    return 0;
}