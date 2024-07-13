```
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

std::string find_max(const std::vector<std::string>& words) {
    std::string max_word = *std::max_element(words.begin(), words.end(),
        [](const std::string& a, const std::string& b) {
            return std::count(a.begin(), a.end(), std::unique_copy(a.begin(), a.end())) <
                   std::count(b.begin(), b.end(), std::unique_copy(b.begin(), b.end()));
    });
    return max_word;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<std::string> words(n);
    for (auto& word : words) {
        std::cin >> word;
    }
    std::cout << find_max(words) << std::endl;
    return 0;
}