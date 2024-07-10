#include <iostream>
#include <map>
#include <string>

using namespace std;

bool issame(std::map<std::map<char, int>::key_type, std::map<char, int>::mapped_type> a, std::map<std::map<char, int>::key_type, std::map<char, int>::mapped_type> b) {
    return a == b;
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