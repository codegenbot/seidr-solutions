```
#include <iostream>
#include <vector>
#include <string>

bool issame(const std::vector<std::string>& v1, const std::vector<std::string>& v2) {
    if(v1.size() != v2.size()) return false;
    for(auto s : v1) {
        if(std::find(v2.begin(), v2.end(), s) == v2.end())
            return false;
    }
    return true;
}

std::vector<std::string> filter_by_substring(const std::vector<std::string>& strings, const std::string& substring) {
    std::vector<std::string> result;
    for(auto s : strings) {
        if(s.find(substring) != std::string::npos)
            result.push_back(s);
    }
    return result;
}

int main() {
    std::vector<std::string> v1 = {"apple", "banana", "cherry"};
    std::vector<std::string> v2 = {"banana", "cherry", "date"};
    
    if(issame(filter_by_substring(v1, "an"), filter_by_substring(v2, "an")))
        std::cout << "Vectors are same.\n";
    else
        std::cout << "Vectors are not same.\n";

    return 0;
}