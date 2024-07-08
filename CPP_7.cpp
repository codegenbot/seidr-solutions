#include <vector>
#include <string>

std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring) {
    std::vector<std::string> result;
    for(auto str : strings){
        if(str.find(substring) != std::string::npos){
            result.push_back(str);
        }
    }
    return result;
}

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    bool flag = true;
    for(int i = 0; i < min(a.size(), b.size()); i++){
        if(!issame_helper(a[i], b[i])){
            flag = false;
            break;
        }
    }
    return flag;
}

bool issame_helper(const std::string& a, const std::string& b) {
    return a == b;
}

int main() {
    assert(issame({filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run")}, {"grunt", "prune"}));
    return 0;
}