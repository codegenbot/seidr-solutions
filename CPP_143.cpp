```cpp
#include <cassert>
#include <string>
#include <vector>

std::vector<std::string> words_in_sentence(const std::string& sentence) {
    std::vector<std::string> words;
    size_t pos = 0, prevPos = 0;

    while ((pos = sentence.find(' ', pos)) != std::string::npos) {
        words.push_back(sentence.substr(prevPos, pos - prevPos));
        prevPos = pos + 1;
    }

    if (prevPos < sentence.size()) {
        words.push_back(sentence.substr(prevPos));
    }

    return words;

}

int main() {
    assert(std::vector<std::string>({"is"}) == words_in_sentence("here is"));
    return 0;
}