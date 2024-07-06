```
#include <vector>
#include <string>
#include <algorithm>

std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring){
    std::vector<std::string> result;
    for (const auto& s : strings) {
        if (s.find(substring) != std::string::npos) {
            result.push_back(s);
        }
    }
    return result;
}

bool isSame(std::vector<std::string> a, std::vector<std::string> b){
    if(a.size()!=b.size())return false;
    for(auto s : a){
        if(std::find(b.begin(),b.end(),s)==b.end())return false;
    }
    return true;
}

int main(){
    assert(isSame(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run"), {"grunt", "prune"}));
}