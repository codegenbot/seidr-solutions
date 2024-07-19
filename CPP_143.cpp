```cpp
#include <iostream>
#include <string>

size_t wordsInSentence(const std::string& str) {
    size_t count = 0;
    size_t pos = 0;
    while ((pos = str.find(" ", pos)) != std::string::npos) {
        ++count;
        pos = str.find(" ", pos);
    }
    return count + 1; // Add 1 for the last word
}

int main() {
    std::cout << "Enter a sentence: ";
    std::string str;
    std::cin >> str;

    size_t result = wordsInSentence(str);

    std::cout << "Number of words: " << result << std::endl;

    assert(wordsInSentence("here is") == 2); 

    return 0;
}