```
#include <iostream>
#include <vector>
#include <string>

bool isSame(std::vector<std::string> a, std::vector<std::string> b) {
    if(a.size() != b.size()) {
        return false;
    }
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<std::string> filter_by_prefix(std::vector<std::string> strings, std::string prefix){
    std::vector<std::string> result;
    for(string s : strings){
        if(s.find(prefix) == 0)
            result.push_back(s);
    }
    string prefix;
    cout << "Enter a prefix: ";
    cin >> prefix;
    
    return filter_by_prefix(strings, prefix);
}