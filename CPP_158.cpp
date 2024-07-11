#include <string>
#include <vector>

std::string find_max(std::vector<std::string> words) {
    std::string result = "";
    int max_unique_chars = 0;

    for (const auto& word : words) {
        set<char> unique_chars;
        for (char c : word) {
            unique_chars.insert(c);
        }
        if (unique_chars.size() > max_unique_chars) {
            max_unique_chars = unique_chars.size();
            result = word;
        } else if (unique_chars.size() == max_unique_chars && word < result) {
            result = word;
        }
    }

    return result;
}

int main() {
    std::vector<std::string> words;
    std::cout << "Enter words separated by space: ";
    for (std::string str; std::getline(std::cin, str);) {
        words.push_back(str);
    }
    if (!words.empty()) {
        std::cout << "The word with maximum unique characters is : " << find_max(words) << std::endl;
    } else {
        std::cout << "No input provided." << std::endl;
    }
    return 0;
}