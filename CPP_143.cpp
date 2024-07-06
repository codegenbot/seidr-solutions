#include <cassert>
#include <string>
#include <sstream>

std::string words_in_sentence(const std::string& sentence) {
    std::stringstream ss;
    ss << sentence;
    std::string word;
    int count = 0;

    while (ss >> word) {
        if (count > 0)
            std::cout << " ";
        std::cout << word;
        count++;
    }

    return "";
}

int main() {
    assert(words_in_sentence("here is").size() == 2);
    return 0;
}