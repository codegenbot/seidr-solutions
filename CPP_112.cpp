#include <algorithm>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> reverse_delete(string s, string c) {
    for (int i = 0; i < c.length(); i++) {
        s.erase(remove(s.begin(), s.end(), c[i]), s.end());
    }
    string reversed_s = s;
    reverse(reversed_s.begin(), reversed_s.end());
    bool is_palindrome = (s == reversed_s);
    return {s, (is_palindrome ? "True" : "False")};
}

int main() {
    assert(issame(reverse_delete("mamma", "mia"), {"", "True"}));
    return 0;
}