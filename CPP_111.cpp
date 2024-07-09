#include <iostream>
#include <map>
#include <vector>
#include <sstream>

std::vector<std::string> split(std::string str, char delimiter) {
    std::vector<std::string> tokens;
    std::string token;
    std::istringstream tokenStream(str);
    while (std::getline(tokenStream, token, delimiter)) {
        tokens.push_back(token);
    }
    return tokens;
}

bool issame(const std::map<char,int>& a, const std::map<char,int>& b) {
    return a == b;
}

std::map<char,int> histogram(std::string test){
    std::map<char,int> result;
    int maxCount = 0;

    for (std::string word : split(test, ' ')) {
        for (char c : word) {
            if (result.find(c) == result.end()) {
                result[c] = 1;
            } else {
                result[c]++;
            }
            maxCount = std::max(maxCount, result[c]);
        }
    }

    std::map<char,int> finalResult;

    for (auto it = result.begin(); it != result.end(); ++it) {
        if (it->second == maxCount) {
            finalResult[it->first] = it->second;
        }
    }

    return finalResult;
}

int main() {
    assert(issame(histogram("a"), {{'a', 1}}));
    // Your test case code here
    return 0;
}