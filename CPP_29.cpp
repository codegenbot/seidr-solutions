```
#include <iostream>
#include <vector>

bool issame(vector<string> a, vector<string> b){
    if(a.size() != b.size()) 
        return false;
    
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]) 
            return false;
    }
    
    return true;
}

std::vector<std::string> filter_by_prefix(std::vector<std::string> strings, std::string prefix) { 
    std::vector<std::string> result; 
    for(auto s : strings){ 
        if (!s.empty() && s.find(prefix) == 0) 
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

    assert(filteredStrings == std::vector<std::string>({"hi", "hey"}));

    return 0;
}