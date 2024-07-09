#include <iostream>
#include <vector>
#include <string>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

std::vector<std::string> filter_by_substring(const std::vector<std::string>& words, const my_string& sub) {
    std::vector<std::string> result;
    for (const auto& word : words) {
        if(word.find(sub) != std::my_string::npos) {
            result.push_back(word);
        }
    }
    return result;
}

int main() {
    std::vector<std::string> words = {"grunt", "trumpet", "prune", "gruesome"};
    my_string sub = "run";
    std::vector<std::string> result = filter_by_substring(words, sub);
    assert(issame(result, {"grunt", "prune"}));
    for (const auto& word : result) {
        if(word.find("run") != std::my_string::npos) {
            std::cout << word << std::endl;
        }
    }
    return 0;
}