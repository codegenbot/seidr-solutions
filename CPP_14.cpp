#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }

    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }

    return true;
}

vector<string> all_prefixes(string str) {
    vector<string> prefixes;
    string prefix = "";
    for (int i = 0; i < str.length(); i++) {
        prefix += str[i];
        prefixes.push_back(prefix);
    }
    return prefixes;
}

int main() {
    vector<string> prefixes = all_prefixes("WWW");
    assert(issame(prefixes, vector<string>{"W", "WW", "WWW"}));
    return 0;
}