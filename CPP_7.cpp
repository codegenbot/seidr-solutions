```cpp
#include <iostream>
#include <vector>
#include <algorithm>

bool issame(vector<string> a, vector<string> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(find(b.begin(), b.end(), a[i]) == b.end()) return false;
    }
    return true;
}

vector<vector<string>> filter_by_substring(vector<vector<string>> input, string sub) {
    vector<vector<string>> result;
    for(auto &v : input) {
        bool same = true;
        for(auto &s : v) {
            if(!issame({s}, {sub})) {
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
    return 0;
}