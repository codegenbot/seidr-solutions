#include <iostream>
#include <vector>
#include <algorithm>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) return false;
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

std::vector<std::string> filter_by_prefix(std::vector<std::string> strings, std::string prefix) { 
    std::vector<std::string> result; 
    for(auto s : strings){ 
        if(s.find(prefix) == 0) 
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

    std::vector<std::string> testStrings = {"xxx", "asd", "xxy", "john doe", "xxxxAAA", "xxx"};
    std::string testPrefix = "xxx";

    std::vector<std::string> testFilteredStrings = filter_by_prefix(testStrings, testPrefix);

    for(auto s : testFilteredStrings){
        std::cout << s << "\n";
    }

    assert(issame(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxxAAA", "xxx"}, "xxx"), {"xxx", "xxxAAA", "xxx"}));
    
    return 0;
}