#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

bool are_vectors_equal(const vector<string>& vec1, const vector<string>& vec2) {
    if(vec1.size() != vec2.size()) {
        return false;
    }
    
    for(int i = 0; i < vec1.size(); ++i) {
        if(vec1[i] != vec2[i]) {
            return false;
        }
    }

    return true;
}

vector<string> filter_by_substring(const vector<string>& strings, const string& substring) {
    vector<string> filtered_strings;
    for (const auto& str : strings) {
        if (str.find(substring) != string::npos) {
            filtered_strings.push_back(str);
        }
    }
    return filtered_strings;
}

int main() {
    assert(are_vectors_equal(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run"), {"grunt", "prune"}));
    return 0;
}