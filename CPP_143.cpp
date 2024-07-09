#include <vector>
#include <string>
#include <sstream>

std::vector<std::string> words_in_sentence(const std::string& sentence) {
    if (sentence.empty()) {
        return {};
    }
    std::vector<std::string> wordLengths; 
    std::stringstream ss(sentence);
    std::string word;

    while (ss >> word) {
        int length = word.length();
        bool isPrime = true;
        
        for (int i = 2; i * i <= length; ++i) {
            if (length % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            wordLengths.push_back(std::to_string(length));
        }
    }

    return wordLengths; 
}

int main() {
    std::string sentence;
    std::cout << "Enter a sentence: ";
    std::getline(std::cin, sentence);

    std::vector<std::string> wordLengths = words_in_sentence(sentence);
    for (const auto& length : wordLengths) {
        std::cout << length << '\n';
    }
}