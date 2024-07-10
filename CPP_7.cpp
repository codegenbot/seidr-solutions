#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

bool issame(vector<std::string> a, vector<std::string> b) {
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

int main() {
    vector<vector<string>> input = {{"grunt"}, {"trumpet"}, {"prune"}, {"gruesome"}};
    string sub = "run";
    vector<vector<string>> expected = {{{"grunt"}}, {{"prune"}}};

    if (!issame(filter_by_substring(input, sub), expected)) {
        std::cerr << "Error: Filtered result does not match expected output." << std::endl;
        return 1;
    }
    return 0;
}