#include <vector>
#include <string>

int main() {
    std::vector<std::string> strings = {"apple", "banana", "apricot", "cherry"};
    std::string prefix = "app";
    
    int resultCount;
    for (auto& s : filter_by_prefix(strings, prefix)) {
        std::cout << s << std::endl;
    }
    resultCount = filter_by_prefix(strings, prefix).size();
    return 0;
}

std::vector<std::string> filter_by_prefix(std::vector<std::string> strings, std::string prefix) { 
    std::vector<std::string> result; 
    for(auto s : strings){ 
        if(s.find(prefix) == 0) 
            result.push_back(s); 
    } 
    return result;
}