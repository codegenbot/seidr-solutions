#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring){
    std::vector<std::string> result;
    for (const auto& str : strings) {
        if(str.find(substring) != std::string::npos) {
            result.push_back(str);
        }
    }
    return result;
}

bool issame(vector<vector<string>>& b, vector<string>& a){
    bool same = true;
    for(int i=0; i<a.size(); i++){
        for(int j=0; j<b[i].size(); j++){
            if(a[i] != b[i][j]){
                same = false;
                break;
            }
        }
        if(!same)break;
    }
    return same;
}

int main() {
    assert(issame({{{"grunt", "trumpet", "prune", "gruesome"}}, {{"grunt"}, {"prune"}}}), "Test failed");
    return 0;
}