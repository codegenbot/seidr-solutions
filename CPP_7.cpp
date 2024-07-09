#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

bool issame(vector<string> a, vector<vector<string>> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        bool same = true;
        for(auto &s : a[i]) {
            bool found = false;
            for(auto &v : b[i]) {
                if(v.find(s) != std::string::npos) {
                    found = true;
                    break;
                }
            }
            if(!found) return false;
        }
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
    vector<vector<string>> input = {"grunt", "trumpet", "prune", "gruesome"};
    string sub = "run";
    
    vector<vector<string>> b = filter_by_substring(input, sub);
    bool same = issame(b, {{input[0][0], input[1][0], input[2][0], input[3][0]}});
    assert(same);
    
    return 0;
}