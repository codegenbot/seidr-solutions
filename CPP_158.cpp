#include <iostream>
#include <string>
#include <vector>

int main() {
    std::vector<std::string> words = {"play", "play", "play"};
    std::string max_word = *std::max_element(words.begin(), words.end(),
        [](const std::string& a, const std::string& b) {
            if (a.length() == b.length()) {
                return a < b;
            }
            return a.length() > b.length();
        });
    std::cout << max_word << std::endl;
    return 0;
}