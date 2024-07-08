```cpp
#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    bool flag = true;
    if (a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++){
        if(!issame(a[i], b[i])){
            flag = false;
            break;
        }
    }
    return flag;
}

std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring){
    std::vector<std::string> result;
    for(auto str : strings){
        if(str.find(substring) != std::string::npos){
            result.push_back(str);
        }
    }
    return result;

int main() {
    assert(issame({filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run")}, {"grunt", "prune"}));
    return 0;
}