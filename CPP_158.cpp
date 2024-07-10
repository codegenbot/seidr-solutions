#include <iostream>
#include <string>
#include <vector>

void findMaxWord(std::vector<std::string>& words) {
    std::string max_word = *std::max_element(words.begin(), words.end(),
        [](const std::string& a, const std::string& b) {
            if (a.length() == b.length()) {
                return a < b;
            }
            return a.length() > b.length();
        });
    std::cout << "Max word is: " << max_word << std::endl;
}

int main() {
    std::vector<std::string> words;
    int n;
    std::cout << "Enter the number of words: ";
    std::cin >> std::ws; // clear the newline left in the stream buffer
    std::cin >> n;

    std::cin.ignore(); // ignore newline left in the stream buffer

    for (int i = 0; i < n; ++i) {
        std::string word;
        std::cout << "Enter word " << (i + 1) << ": ";
        std::getline(std::cin, word); 
        words.push_back(word);
        std::cin.ignore(); // Add this line to ignore any remaining newline characters.
    }

    findMaxWord(words);
    return 0;
}