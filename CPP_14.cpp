#include <vector>
#include <string>

bool issame(const vector<string>& first, const vector<string>& second) {
    if (first.size() != second.size()) {
        return false;
    }

    for (int i = 0; i < first.size(); ++i) {
        if (first[i] != second[i]) {
            return false;
        }
    }

    return true;
}

vector<string> all_prefixes(string str){
    vector<string> result;
    string prefix = "";
    for (char c : str) {
        prefix += c;
        result.push_back(prefix);
    }
    return result;
}