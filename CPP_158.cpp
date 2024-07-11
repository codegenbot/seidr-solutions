```cpp
#include <iostream>
#include <vector>
#include <string>
#include <set>

std::string find_max(std::vector<std::string> words) {
    std::string result = "";
    int max_length = 0;

    for (const auto& word : words) {
        if (word.length() > max_length) {
            max_length = word.length();
            result = word;
        } else if (word.length() == max_length && word > result) {
            result = word;
        }
    }

    return result;
}

int main() {
    std::vector<std::string> words = {"play", "play", "play"};
    std::cout << find_max(words) << std::endl;
    return 0;
}