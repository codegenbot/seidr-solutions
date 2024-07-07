#include <vector>
#include <string>
#include <algorithm>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if(a.size() != b.size())
        return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i])
            return false;
    }
    return true;
}

std::vector<std::string> filter_strings(const std::vector<std::string>& strings, const std::string& substring) {
    std::vector<std::string> result;
    for(const auto& s : strings){
        if(s.find(substring) != std::string::npos)
            result.push_back(s);
    }
    return result;

}

int main() {
    std::vector<std::string> str = {"grunt", "trumpet", "prune", "gruesome"};
    std::vector<std::string> filtered = filter_strings(str, "run"); 
    assert(issame(filtered,str)); 
    return 0;
}