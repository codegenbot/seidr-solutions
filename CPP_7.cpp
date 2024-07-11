#include <vector>
#include <string>
#include <algorithm>

bool issame(const vector<string>& a, const vector<string>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < a.size(); ++i) {
        if (!std::includes(b.begin(), b.end(), a[i].begin(), a[i].end())) {
            return false;
        }
    }
    return true;
}

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for(auto &s : strings) {
        if(s.find(substring) != string::npos)
            result.push_back(s);
    }
    return result;
}