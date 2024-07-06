```
#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring){
    std::vector<std::string> result;
    for(std::string s : strings){
        if(s.find(substring) != std::string::npos)
            result.push_back(s);
    }
    return result;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<std::string> words(n);
    for(int i = 0; i < n; i++) {
        std::cin >> words[i];
    }
    
    std::string sub;
    std::cin >> sub;
    
    std::vector<std::string> result = filter_by_substring(words, sub);
    
    if(result.size() > 0) {
        for(std::string s : result) {
            std::cout << s << std::endl;
        }
    } else {
        std::cout << "No strings found." << std::endl;
    }
    
    return 0;
}