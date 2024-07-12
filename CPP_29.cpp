```cpp
#include <iostream>
#include <vector>

std::vector<std::string> filter_by_prefix(std::vector<std::string> strings, std::string prefix) { 
    std::vector<std::string> result; 
    for(auto s : strings){ 
        if(s.find(prefix) == 0 || s.size() < prefix.size())
            continue;
        result.push_back(s); 
    } 
    return result;
}

int main(){
    std::vector<std::string> strings = {"hello", "hi", "hey"};
    std::string prefix = "h";
    
    std::vector<std::string> filteredStrings = filter_by_prefix(strings, prefix);

    for(auto s : filteredStrings){
        std::cout << s << "\n";
    }

    return 0;
}