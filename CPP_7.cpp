#include <iostream>
#include <vector>
#include <string>

bool issame(const std::string& str1, const std::string& str2) {
    return str1 == str2;
}

std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring) {
    std::vector<std::string> result;
    for (const auto& str : strings) {
        if (str.find(substring) != std::string::npos) {
            result.push_back(str);
        }
    }
    return result;
}

int main() {
    std::vector<std::string> words = {"apple", "banana", "orange", "grape", "melon"};
    std::string key = "an";

    std::vector<std::string> filtered_words = filter_by_substring(words, key);

    for (const auto& word : filtered_words) {
        std::cout << word << std::endl;
    }

    return 0;
}