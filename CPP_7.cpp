```
#include <iostream>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) 
        return false;
    
    for (int i = 0; i < a.size(); i++) 
        if (a[i] != b[i])
            return false;
    
    return true;
}

int main() {
    std::vector<std::string> strings = {"apple", "banana", "apple", "orange", "banana"};
    std::string substring = "banana";
    
    std::vector<std::string> filteredStrings = filter_by_substring(strings, substring);
    
    for (std::string s : filteredStrings) {
        std::cout << s << std::endl;
    }
    
    vector<string> a = {"apple", "banana"};
    vector<string> b = {"apple", "banana"};
    
    assert(issame(a, b));
    
    return 0;
}