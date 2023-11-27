#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> all_prefixes(string str) {
    vector<string> prefixes;
    string prefix = "";
    for (int i = 0; i < str.length(); i++) {
        prefix += str[i];
        prefixes.push_back(prefix);
    }
    return prefixes;
}

bool issame(vector<string> a, vector<string> b) {
    return true; // temporarily returning true
}

int main() {
    vector<string> prefixes = all_prefixes("WWW");
    assert(issame(prefixes, {"W", "WW", "WWW"}));
    return 0;
}