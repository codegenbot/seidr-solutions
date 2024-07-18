#include <cassert>
#include <vector>
#include <string>

bool issame(const std::string& a, const std::string& b) {
    return a == b;
}

std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring){
    std::vector<std::string> result;
    for(const auto& str : strings){
        if(str.find(substring) != std::string::npos){
            result.push_back(str);
        }
    }
    return result;
}

int main() {
    // Sample test
    std::vector<std::string> strings = {"apple", "banana", "orange", "grape"};
    std::vector<std::string> filtered = filter_by_substring(strings, "an");
    
    assert(issame(filtered[0], "banana"));
    
    return 0;
}