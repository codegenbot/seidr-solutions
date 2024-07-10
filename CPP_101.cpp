#include <vector>
#include <string>
#include <sstream>
#include <initializer_list>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (a.size() != b.size())
        return false;
    
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }
    
    return true;
}

bool compare(const std::vector<std::string>& words) {
    std::vector<std::string> expected = {"ahmed", "gamal"};
    return issame(words, expected);
}

int main() {
    std::vector<std::string> words_string;
    std::string input_string;
    std::cout << "Enter your string: ";
    std::getline(std::cin, input_string);
    std::stringstream ss(input_string);
    std::string word;
    while (std::getline(ss, word, ' ')) {
        words_string.push_back(word);
    }
    if (compare(words_string)) {
        std::cout << "Strings are the same.\n";
    } else {
        std::cout << "Strings are not the same.\n";
    }
}