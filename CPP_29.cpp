#include <iostream>
#include <vector>
#include <string>

bool std::issame(std::vector<std::string> a, std::vector<std::string> b) {
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

int main() {
    std::string prefix;
    std::cout << "Enter the prefix: ";
    std::cin >> prefix;
    
    std::vector<std::string> strings = {"apple", "banana", "orange", "apricot", "avocado"};
    std::vector<std::string> result = filter_by_prefix(strings, prefix);
    
    for(string s : result) {
        std::cout << s << "\n";
    }
}

std::vector<std::string> filter_by_prefix(std::vector<std::string> strings, string prefix){
    std::vector<string> result;
    for(string s : strings){
        if(s.find(prefix) == 0)
            result.push_back(s);
    }
    return result;
}