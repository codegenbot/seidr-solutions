#include <vector>
#include <string>
#include <initializer_list>

std::vector<std::string> words_in_sentence(const std::string& sentence) {
    std::vector<std::string> tokens;
    std::stringstream ss(sentence);
    std::string token;

    while (getline(ss, token)) {
        tokens.push_back(token);
    }

    return tokens;
}