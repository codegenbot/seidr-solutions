```cpp
#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> split(const std::string& str, char delimiter) {
    std::vector<std::string> tokens;
    size_t pos = 0;
    size_t prev = 0;

    while ((pos = str.find(delimiter, prev)) != std::string::npos) {
        tokens.push_back(str.substr(prev, pos - prev));
        prev = pos + 1;
    }

    tokens.push_back(str.substr(prev));
    return tokens;
}

std::vector<int> words_in_sentence(std::string sentence) {
    std::vector<int> wordLengths{}; // Initialize here
    std::string result = "";

    for (const auto& word : split(sentence, ' ')) {
        int length = word.length();
        bool isPrime = true;

        if (length > 1) {
            for (int i = 2; i * i <= length; ++i) {
                if (length % i == 0) {
                    isPrime = false;
                    break;
                }
            }

            if (isPrime) {
                result += word + " ";
                wordLengths.push_back(length);
            }
        }
    }

    return wordLengths; // Return the actual vector
}

int main() {
    std::string sentence;
    std::cout << "Enter a sentence: ";
    std::getline(std::cin, sentence);

    std::cout << "Words with prime lengths are: ";
    for (const auto& length : words_in_sentence(sentence)) {
        std::cout << length << " ";
    }
    std::cout << std::endl;

    return 0;
}