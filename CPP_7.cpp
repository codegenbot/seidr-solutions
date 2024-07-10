```cpp
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
    for(int i = 0; i < a.size(); i++){
        bool found = false;
        for(const auto& v : b){
            if(std::equal(a[i].begin(), a[i].end(), v.begin())){
                found = true;
                break;
            }
        }
        if(!found) return false;
    }
    return true;
}

int main() {
    assert(issame({{{"grunt", "trumpet", "prune", "gruesome"}}, {{"grunt"}, {"prune"}}}) );
    return 0;
}