#include <iostream>
#include <vector>
#include <string>

bool isSame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

std::vector<std::string> filterBySubstring(const std::vector<std::string>& words, const std::string& sub) {
    std::vector<std::string> result;
    for (const auto& word : words) {
        if(word.find(sub) != std::string::npos) {
            result.push_back(word);
        }
    }
    return result;
}

int mainProblem() {  
    std::vector<std::string> result = filterBySubstring({"grunt", "trumpet", "prune", "gruesome"}, "run");
    assert(isSame(result, {"grunt", "prune"}));
    for (const auto& word : result) {
        if(word.find("run") != std::string::npos) {
            std::cout << word << std::endl;
        }
    }
    return 0;
}