```
#include <iostream>
#include <vector>
#include <string>

bool issame(const std::string& s1, const std::string& s2) {
    return s1 == s2;
}

std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring){
    std::vector<std::string> result;
    for (const auto& str : strings) {
        if(str.find(substring) != std::string::npos) {
            result.push_back(str);
        }
    }
    return result;
}

int main() {
    std::vector<std::string> words = {"apple", "banana", "apricot"};
    std::cout << "Original Words: ";
    for (const auto& word : words) {
        std::cout << word << " ";
    }
    std::cout << "\n";

    std::vector<std::string> filteredWords = filter_by_substring(words, "app");
    std::cout << "Filtered Words with 'app': ";
    for (const auto& word : filteredWords) {
        std::cout << word << " ";
    }
    std::cout << "\n";
    
    return 0;
}