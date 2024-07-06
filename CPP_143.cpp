```c
#include <cassert>
#include <string>
#include <vector>

std::vector<std::string> words_in_sentence(const std::string& sentence) {
    std::vector<std::string> words;
    size_t pos = 0;
    while ((pos = sentence.find(' ')) != std::string::npos) {
        words.push_back(sentence.substr(0, pos));
        sentence.erase(0, pos + 1);
    }
    if (!sentence.empty())
        words.push_back(sentence);
    return words;

}

int main() {
    assert(words_in_sentence("here is").size() == 2);
    return 0;
}