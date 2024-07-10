#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

std::string find_max(const std::vector<std::string>& words) {
    return *std::max_element(words.begin(), words.end(),
        [](const std::string& a, const std::string& b) {
            if (a.length() == b.length()) {
                return a < b;
            }
            return a.length() > b.length();
        });
}

int main() {
    std::vector<std::string> words = {"play", "play", "play"};
    std::string max_word = find_max(words);
    std::cout << max_word << std::endl;
    return 0;
}