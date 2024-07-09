#include <set>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    return set<string>(a.begin(), a.end()) == set<string>(b.begin(), b.end());
}

vector<string> all_prefixes(string str) {
    vector<string> result;
    for (int i = 1; i <= str.length(); i++) {
        result.push_back(str.substr(0, i));
    }
    return result;
}