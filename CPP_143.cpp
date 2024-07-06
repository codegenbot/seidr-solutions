```cpp
#include <cassert>
#include <string>
#include <vector>

int words_in_sentence(const std::string& sentence) {
    std::vector<std::string> words;
    size_t start = 0;
    for (size_t i = 0; i <= sentence.size(); ++i) {
        if ((i == sentence.size()) || isspace(sentence[i])) {
            words.push_back(sentence.substr(start, i - start));
            start = i + 1;
        }
    }
    return words.size();
}

int main() {
    assert(words_in_sentence("here is").size() == 2);
    return 0;
}