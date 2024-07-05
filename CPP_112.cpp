#include <iostream>
#include <vector>
#include <unordered_set>
#include <string>
#include <algorithm>
#include <cassert>

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

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    assert(issame(reverse_delete("mamma", "mia"), {"mm", "True"}));
    assert(issame(reverse_delete("example", "axe"), {"mpl", "False"}));
    cout << "All tests passed!" << endl;
    return 0;
}