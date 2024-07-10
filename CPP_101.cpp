#include <vector>
#include <string>
#include <sstream>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (a.size() != b.size())
        return false;
    
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }
    
    return true;
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
    assert(issame(words_string, {"ahmed", "gamal"}));
}