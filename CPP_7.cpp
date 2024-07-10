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

bool issame(std::vector<std::vector<std::string>>& b, std::vector<std::string>& a){
    for(int i = 0; i < a.size(); i++){
        bool found = false;
        for(int j = 0; j < b.size(); j++){
            if(a[i] == b[j][0]){
                found = true;
                break;
            }
        }
        if(!found) return false;
    }
    return true;
}

int main(){
    assert(issame({{{"grunt", "trumpet", "prune", "gruesome"}}, {{"grunt"}, {"prune"}}}, std::vector<std::string>({"grunt", "trumpet", "prune", "gruesome"})) );
}