#include <vector>
#include <string>
#include <cassert>

bool issame(std::vector<std::string> a, std::vector<std::string> b){
    if(a.size() != b.size()){
        return false;
    }
    for(size_t i = 0; i < a.size(); ++i){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

std::vector<std::string> filter_by_prefix(std::vector<std::string> strings, std::string prefix){
    std::vector<std::string> result;
    for(const std::string& str : strings){
        if(str.find(prefix) == 0){
            result.push_back(str);
        }
    }
    return result;
}

int main(){
    std::vector<std::string> strings = {"apple", "banana", "orange", "grape", "pear"};
    std::vector<std::string> filtered = filter_by_prefix(strings, "a");
    assert(filtered.size() == 2);
    assert(issame(filtered, std::vector<std::string>{"apple", "orange"}));

    return 0;
}