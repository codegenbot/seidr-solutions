#include <iostream>
#include <string>
#include <vector>

std::string find_max(const std::vector<std::string>& words) {
    // Initialize the maximum word length to 0
    int max_length = 0;
    // Iterate over the words and find the longest one
    for (auto& word : words) {
        if (word.size() > max_length) {
            max_length = word.size();
        }
    }
    return std::string(max_length, '*');
}

int main() {
    // Initialize the vector with 3 elements
    std::vector<std::string> words = {"play", "play", "play"};
    // Pass the vector as an argument to find_max()
    auto longest_word = find_max(words);
    // Compare the length of the longest word with 4
    if (longest_word.size() == 4) {
        std::cout << "The longest word is: " << longest_word << std::endl;
    } else {
        std::cout << "No word has a length of 4." << std::endl;
    }
}