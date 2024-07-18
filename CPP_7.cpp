#include <iostream>
#include <vector>
#include <string>

bool issame(std::string s1, std::string s2){
    return s1 == s2;
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
    std::vector<std::string> words = {"apple", "banana", "orange", "grape"};
    std::string sub = "an";
    
    std::vector<std::string> filtered_words = filter_by_substring(words, sub);
    
    for(const auto& word : filtered_words){
        std::cout << word << " ";
    }
    
    return 0;
}