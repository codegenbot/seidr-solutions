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

bool issame(vector<vector<string>> b, vector<string>& a){
    bool same = true;
    for(int i = 0; i < b.size(); i++){
        if(a[i] != b[i]){
            same = false;
            break;
        }
    }
    return same;
}

int main() {
    assert(issame({{{"grunt", "trumpet", "prune", "gruesome"}}, {{"grunt"}, {"prune"}}}) );
    return 0;
}