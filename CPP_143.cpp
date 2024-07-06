```cpp
#include <iostream>
#include <string>

int words_in_sentence(const std::string& sentence) {
    int count = 0;
    bool inWord = false;

    for (char c : sentence) {
        if (c == ' ') {
            if(inWord) {
                count++;
                inWord = false;
            }
        } else {
            inWord = true;
        }
    }

    return count + (inWord ? 1 : 0);
}

int main() {
    std::cout << words_in_sentence("here is") << std::endl;
    return 0;
}