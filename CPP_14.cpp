#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> all_prefixes(const string& str) {
    vector<string> prefixes;
    for (size_t i = 1; i <= str.length(); ++i) {
        prefixes.push_back(str.substr(0, i));
    }
    return prefixes;
}

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    assert(issame(all_prefixes("WWW"), {"W", "WW", "WWW"}));
    cout << "Test passed!" << endl;
    return 0;
}