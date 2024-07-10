#include <vector>
#include <string>

std::vector<std::string> words_string(const std::string& s) {
    std::vector<std::string> result;
    std::string word = "";
    for (char c : s) {
        if (c == ',' || c == ' ') {
            if (!word.empty()) {
                result.push_back(word);
                word = "";
            }
        } else {
            word += c;
        }
    }
    if (!word.empty()) {
        result.push_back(word);
    }
    return result;

}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    std::vector<std::string> result = words_string(input);
    bool same = issame(result, {"apple", "banana", "cherry"});
    if (same) {
        std::cout << "The strings are the same.\n";
    } else {
        std::cout << "The strings are not the same.\n";
    }
    return 0;

}