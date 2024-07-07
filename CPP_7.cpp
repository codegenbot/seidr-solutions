#include <vector>
#include <string>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& bvec) {
    if(a.size() != bvec.size())
        return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != bvec[i])
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

std::vector<std::string> filter_by_substring(const std::vector<std::string>& strings, const std::string& substring) {
    std::vector<std::string> result;
    for(const auto& s : strings){
        if(s.find(substring) != std::string::npos)
            result.push_back(s);
    }
    return result;

}

int main() {
    std::vector<std::string> str = {"grunt", "trumpet", "prune", "gruesome"};
    std::vector<std::string> filtered;
    filtered = filter_by_substring(str, "run"); 
    assert(issame({} ,filtered)); 
    return 0;
}