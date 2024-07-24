```cpp
#include <vector>
#include <string>

std::string find_max(const std::vector<std::string>& words) {
    if (words.empty()) {
        return "";
    }
    std::string max = words[0];
    for (const auto& word : words) {
        if (word.size() > std::max(size_t(0), max.size())) {
            max = word;
        }
    }
    return max;
}

int main() {
    std::vector<std::string> words = {"play", "play", "play"};
    std::string result = find_max(words);
    std::cout << result << std::endl;
    return 0;
}