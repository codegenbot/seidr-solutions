#include <iostream>
#include <map>
#include <string>

bool issame(std::map<char, int> a, std::map<char, int> b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::map<char, int> histogram(std::string test) {
    std::map<char, int> result;
    std::map<char, int> count;

    for (char c : test) {
        if (c != ' ') {
            count[c]++;
        }
    }

    int maxCount = 0;
    for (const auto& pair : count) {
        maxCount = std::max(maxCount, pair.second);
    }

    for (const auto& pair : count) {
        if (pair.second == maxCount) {
            result[pair.first] = pair.second;
        }
    }

    return result;
}

int main() {
    std::map<char, int> test1 = histogram("a");

    for (const auto& pair : test1) {
        std::cout << pair.first << " " << pair.second << std::endl;
    }
    
    return 0;
}