#include <vector>
#include <string>

bool stringSame(const std::string& a, const std::string& b) {
    return a == b;
}

std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring){
    std::vector<std::string> result;
    for(auto str : strings){
        if(str.find(substring) != std::string::npos){
            result.push_back(str);
        }
    }
    return result;
}

bool vectorSame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    bool flag = true;
    for(int i = 0; i < min(a.size(), b.size()); i++){
        if(!stringSame(a[i], b[i])){
            flag = false;
            break;
        }
    }
    return flag;
}

int main() {
    assert(vectorSame({filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run")}, {"grunt", "prune"}));
    return 0;
}