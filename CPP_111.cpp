#include <iostream>
#include <map>

std::map<char, int> histogram(std::string test) {
    std::map<char, int> freq;
    for (char c : test) {
        if (c != ' ') {
            freq[c]++;
        }
    }

    int maxCount = 0;
    for (const auto& pair : freq) {
        maxCount = std::max(maxCount, pair.second);
    }

    std::map<char, int> result;
    for (const auto& pair : freq) {
        if (pair.second == maxCount) {
            result[pair.first] = pair.second;
        }
    }

    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    std::map<char, int> result = histogram(input);

    for (const auto& pair : result) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    return 0;
}