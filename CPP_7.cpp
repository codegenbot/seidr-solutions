#include <iostream>
#include <vector>
#include <string>
#include <cassert>

vector<string> filter_by_substring(vector<string> strings, string substring);
bool is_same_vector(vector<string> a, vector<string> b);

int main() {
    assert(is_same_vector(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run"), {"grunt", "prune"}));
    return 0;
}

vector<string> filter_by_substring(vector<string> strings, string substring) {
    vector<string> result;
    for (auto str : strings) {
        if (str.find(substring) != string::npos) {
            result.push_back(str);
        }
    }
    return result;
}

bool is_same_vector(vector<string> a, vector<string> b) {
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