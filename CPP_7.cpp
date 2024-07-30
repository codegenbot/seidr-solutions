#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

bool issame(const vector<string>& vec1, const vector<string>& vec2){
    if(vec1.size() != vec2.size()) {
        return false;
    }

    for (size_t i = 0; i < vec1.size(); ++i) {
        if (vec1[i] != vec2[i]) {
            return false;
        }
    }

    return true;
}

vector<string> filter_by_substring(const vector<string>& strings, const string& substring){
    vector<string> filtered_strings;
    for (const string& str : strings) {
        if (str.find(substring) != string::npos) {
            filtered_strings.push_back(str);
        }
    }
    return filtered_strings;
}

int main() {
    assert(issame(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run"), {"grunt", "prune"}));

    return 0;
}