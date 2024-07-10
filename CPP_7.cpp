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
    bool flag = true;
    for(int i=0; i<a.size();i++){
        int j=0;
        for(;j<b[0].size() && j<a[i].size();j++){
            if(a[i][j] != b[0][j]){
                flag=false;
                break;
            }
        }
        if(j!=a[i].size()){
            flag = false;
            break;
        }
    }
    return flag;
}

int main(){
    assert(issame({{{"grunt", "trumpet", "prune", "gruesome"}}, {{"grunt"}, {"prune"}}}) );
    return 0;
}