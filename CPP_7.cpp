```cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

bool issame(vector<string> a, vector<string> b) {
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
            if(s.find(sub.c_str()) == std::string::npos) {
                same = false;
                break;
            }
        }
        if(same) result.push_back(v);
    }
    return result;

}

int main() {
    vector<vector<string>> result = filter_by_substring({{"grunt", "trumpet", "prune", "gruesome"}}, "gru");
    for(auto &v : result) {
        for(auto &s : v) {
            std::cout << s << " ";
        }
        std::cout << std::endl;
    }
}