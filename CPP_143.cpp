#include <cassert>
#include <string>
#include <sstream>
#include <unordered_set>

std::string words_in_sentence(std::string sentence) {
    std::unordered_set<std::string> wordsToRemove = {"brown", "fox", "lazy"};
    std::stringstream result;
    std::string word;
    std::istringstream iss(sentence);

    while (iss >> word) {
        if (wordsToRemove.find(word) == wordsToRemove.end()) {
            result << word << " ";
        }
    }

    return result.str();
}