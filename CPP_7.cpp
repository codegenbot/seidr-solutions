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

bool is_same(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    bool flag = true;
    size_t min_len = std::min(a.size(), b.size());
    for(size_t i = 0; i < min_len; i++){
        if(!is_same_helper(a[i], b[i])){
            flag = false;
            break;
        }
    }
    return flag;
}

bool is_same_helper(const std::string& a, const std::string& b) {
    return a == b;
}

int main() {
    assert(is_same({filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run")}, {"grunt", "prune"}));
    return 0;
}