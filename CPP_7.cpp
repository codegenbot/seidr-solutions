#include <iostream>
#include <vector>
#include <string>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<std::string> filter_by_substring(const std::vector<std::string>& words, const std::string& sub) {
    if(sub.empty()) return words; // handle empty substring
    std::vector<std::string> result;
    for (const auto& word : words) {
        if(word.find(sub) != std::string::npos) {
            result.push_back(word);
        }
    }
    return result;
}

int main() {
    std::vector<std::string> words = {"grunt", "trumpet", "prune", "gruesome"};
    std::string sub;
    if (!(std::cin >> sub)) { // validate input
        std::cerr << "Invalid input. Please enter a valid string." << std::endl;
        return 1; // exit with error code
    }
    std::vector<std::string> result = filter_by_substring(words, sub);
    for (const auto& word : result) {
        if(word.find(sub) != std::string::npos) {
            std::cout << word << std::endl;
        }
    }
    return 0;
}