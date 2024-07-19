#include <vector>
#include <string>
#include <initializer_list>

std::vector<std::string> words_in_sentence(const std::string& sentence) {
    std::vector<std::string> result;
    size_t start = 0;

    for (size_t i = 0; i <= sentence.size(); ++i) {
        if (i == sentence.size() || sentence[i] == ' ') {
            result.push_back(sentence.substr(start, i - start));
            start = i + 1;
        }
    }

    return result;
}