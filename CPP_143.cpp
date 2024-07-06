```cpp
#include <iostream>
#include <string>

std::string words_in_sentence(std::string sentence) {
    int count = 0;
    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] == ' ' || i == sentence.length() - 1) {
            if (i != sentence.length() - 1)
                count++;
        }
    }
    return std::to_string(count);
}

int main() {
    std::cout << words_in_sentence("here is") << std::endl;
    return 0;
}