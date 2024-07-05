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

int main() {
    assert((reverse_delete("mamma", "mia") == vector<string>{"mm", "True"}));
    assert((reverse_delete("example", "axe") == vector<string>{"mpl", "False"}));
    cout << "All tests passed!" << endl;
    return 0;
}