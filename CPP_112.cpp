#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> reverse_delete(string s, string c) {
    string result;
    for (char ch : s) {
        if (c.find(ch) == string::npos) {
            result += ch;
        }
    }
    string reversed = result;
    reverse(reversed.begin(), reversed.end());
    return {result, (result == reversed) ? "True" : "False"};
}

int main1() {
    assert(issame(reverse_delete("mamma", "mia"), {"", "True"}));
    return 0;
}

int main() {
    auto result = reverse_delete("mamma", "mia");
    assert(issame(result, {"", "True"}));
    return 0;
}