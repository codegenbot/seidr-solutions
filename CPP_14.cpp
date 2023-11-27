#include <vector>
#include <string>
#include <cassert>

bool issame(std::vector<std::string> a, std::vector<std::string> b){
    if(a.size() != b.size())
        return false;
    for(int i=0; i < a.size(); i++){
        if(a[i] != b[i])
            return false;
    }
    return true;
}

std::vector<std::string> all_prefixes(std::string str);

int main(){
    assert(issame(all_prefixes("WWW"), {"W", "WW", "WWW"}));
    return 0;
}

std::vector<std::string> all_prefixes(std::string str){
    std::vector<std::string> result;
    std::string prefix = "";
    for(int i=0; i < str.length(); i++){
        prefix += str[i];
        result.push_back(prefix);
    }
    return result;
}