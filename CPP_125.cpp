#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <memory_resource>

bool issame(std::vector<std::pmr::string> a, std::vector<std::pmr::string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<std::pmr::string> split_words(std::string input) {
    std::vector<std::pmr::string> words;
    std::istringstream iss(input);
    std::pmr::string word;
    while (iss >> word) {
        words.push_back(word);
    }
    return words;
}

int main() {
    std::string input;
    std::getline(std::cin, input);
    
    std::vector<std::pmr::string> a = split_words(input);
    std::vector<std::pmr::string> b = split_words(input);
    
    if (issame(a, b)) {
        std::cout << "Same" << std::endl;
    } else {
        std::cout << "Different" << std::endl;
    }
    
    return 0;
}