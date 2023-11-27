#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>

std::string most_common_word(const std::string& sentence) {
    std::istringstream iss(sentence);
    std::vector<std::string> words;
    std::string word;

    while (iss >> word) {
        words.push_back(word);
    }

    std::sort(words.begin(), words.end());

    std::string mostCommon;
    int currentCount = 0;
    int maxCount = 0;

    for (int i = 0; i < words.size(); i++) {
        if (i == 0 || words[i] != words[i - 1]) {
            currentCount = 1;
        }
        else {
            currentCount++;
        }

        if (currentCount > maxCount) {
            maxCount = currentCount;
            mostCommon = words[i];
        }
    }

    return mostCommon;
}

int main() {
    std::string sentence;
    std::getline(std::cin, sentence);

    std::string result = most_common_word(sentence);
    std::cout << result << std::endl;

    return 0;
}