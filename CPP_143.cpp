```cpp
#include <iostream>
#include <string>

int words_in_sentence(const std::string& sentence) {
    int count = 0;
    bool inWord = false;

    for (std::string::size_type i = 0; i < sentence.size(); ++i) {
        char c = sentence[i];
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
    //assert(words_in_sentence("here is") == 2);
    return 0;
}