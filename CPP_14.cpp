#include <vector>
#include <string>
#include <cassert>
#include <iostream>

using namespace std;

vector<string> all_prefixes(const string& str) {
    vector<string> prefixes;
    for (size_t i = 1; i <= str.size(); ++i) {
        prefixes.push_back(str.substr(0, i));
    }
    return prefixes;
}

bool issame(const vector<string>& a, const vector<string>& b) {
    return a == b;
}

int main() {
    assert(issame(all_prefixes("WWW"), {"W", "WW", "WWW"}));
    cout << "All tests passed!" << endl;
    return 0;
}