#include <vector>
#include <string>
#include <algorithm>

bool issame(const std::string& s1, const std::string& s2) {
    if (s1.size() != s2.size())
        return false;
    for (int i = 0; i < s1.size(); ++i)
        if (s1[i] != s2[i])
            return false;
    return true;
}

std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring) {
    std::vector<std::string> result;
    for (const auto& str : strings) {
        if(str.find(substring) != std::string::npos) {
            result.push_back(str);
        }
    }
    return result;
}

int main() {
    std::vector<std::string> words = {"hello", "world", "hello world", "cpp"};
    std::string sub = "ello";
    std::vector<std::string> filtered_words = filter_by_substring(words, sub);

    for (const auto& word : filtered_words) {
        if (!issame(word, sub))
            break;
        std::cout << word << std::endl;
    }

    return 0;
}