#include <vector>
#include <string>
#include <cassert>

bool issame(const vector<string>& a, const vector<string>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<string> all_prefixes(string str);

int main() {
    assert(issame(all_prefixes("WWW"), {"W", "WW", "WWW"}));
}

vector<string> all_prefixes(string str) {
    vector<string> prefixes;
    for (int i = 1; i <= str.size(); ++i) {
        prefixes.push_back(str.substr(0, i));
    }
    return prefixes;
}