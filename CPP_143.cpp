#include <iostream>
#include <string>

int words_in_sentence(const std::string& sentence) {
    int count = 0;
    bool inWord = false;

    for (const auto c : sentence) {
        if (c == ' ') {
            inWord = false;
        } else {
            if (!inWord) {
                count++;
                inWord = true;
            }
        }
    }

    return count;
}

int main() {
    std::cout << words_in_sentence("here is") << std::endl;
    return 0;
}