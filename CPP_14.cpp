#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        throw runtime_error("Error: Vectors are not the same size");
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            throw runtime_error("Error: Vectors contain different elements");
        }
    }
    return true;
}

vector<string> all_prefixes(string str) {
    vector<string> prefixes;
    for (int i = 1; i <= str.length(); i++) {
        string prefix = str.substr(0, i);
        prefixes.push_back(prefix);
    }
    return prefixes;
}