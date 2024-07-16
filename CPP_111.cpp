#include <map>
#include <sstream>

bool issame(std::map<char, int> a, std::map<char, int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (const auto& pair : a) {
        if (b.find(pair.first) == b.end() || b[pair.first] != pair.second) {
            return false;
        }
    }
    return true;
}

std::map<char, int> histogram(std::string test) {
    std::map<char, int> result;
    std::istringstream iss(test);
    std::string word;
    while (iss >> word) {
        for (char& c : word) {
            result[c]++;
        }
    }
    int maxCount = 0;
    for (const auto& entry : result) {
        maxCount = std::max(maxCount, entry.second);
    }
    std::map<char, int> finalResult;
    for (const auto& entry : result) {
        if (entry.second == maxCount) {
            finalResult[entry.first] = entry.second;
        }
    }
    return finalResult;
}