#include <iostream>
#include <vector>

std::vector<std::string> filter_by_prefix(std::vector<std::string> strings, const char* prefix) { 
    std::vector<std::string> result; 
    for(auto s : strings){ 
        if (!s.empty() && s.find(std::string(prefix)) == 0) 
            result.push_back(s); 
    } 
    return result;
}

int main(){
    std::vector<std::string> strings = {"hello", "hi", "hey"};
    const char* prefix = "h";
    
    std::vector<std::string> filteredStrings = filter_by_prefix(strings, prefix);

    for(auto s : filteredStrings){
        std::cout << s << "\n";
    }

    return 0;
}