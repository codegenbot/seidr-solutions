#include <vector>
#include <string>
#include <algorithm>

bool operator==(const std::vector<std::string>& a, const std::vector<std::string>& b){
    if(a.size() != b.size())
        return false;
    for(size_t i = 0; i < a.size(); i++){
        if(a[i] != b[i])
            return false;
    }
    return true;
}

int main(){
    assert(std::equal(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run") ,{"grunt", "prune"}));
}