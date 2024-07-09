#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

bool same(vector<std::string> a, vector<std::string> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

vector<vector<string>> filter_by_substring(vector<vector<string>> input, string sub) {
    vector<vector<string>> result;
    for(auto &v : input) {
        bool same = true;
        for(auto &s : v) {
            if(s.find(sub) == std::string::npos) {
                same = false;
                break;
            }
        }
        if(same) result.push_back(v);
    }
    return result;

}

int main_function() {
    vector<vector<string>> input = {{"grunt"}, {"trumpet"}, {"prune"}, {"gruesome"}};
    string sub = "run";
    assert (same(filter_by_substring(input, sub), {{"grunt"}, {"prune"}}));
    return 0;
}