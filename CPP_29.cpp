```cpp
#include <vector>
#include <string>

bool areEqual(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<std::string> filter_by_prefix(std::vector<std::string> words, std::string prefix) {
    std::vector<std::string> result;
    for (const auto& word : words) {
        if (word.find(prefix) == 0) {
            result.push_back(word);
        }
    }
    return result;
}

int main() {
    std::vector<std::string> words;
    std::cout << "Enter the number of words: ";
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::string word;
        std::cout << "Enter word " << i + 1 << ": ";
        std::cin >> word;
        words.push_back(word);
    }
    
    std::cout << "Enter the prefix: ";
    std::string prefix;
    std::cin >> prefix;
    
    std::vector<std::string> filteredWords = filter_by_prefix(words, prefix);
    
    if (words.size() == filteredWords.size()) {
        bool areEqual = areEqual(words, filteredWords);
        if (areEqual) {
            std::cout << "The original and filtered lists of words are equal." << std::endl;
        } else {
            std::cout << "The original and filtered lists of words are not equal." << std::endl;
        }
    } else {
        std::cout << "The original and filtered lists of words have different sizes." << std::endl;
    }
    
    return 0;
}