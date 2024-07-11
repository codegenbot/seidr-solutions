#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

int main() {
    std::vector<std::string> words = {"hello", "world", "abc"};
    std::cout << find_max(words) << std::endl;
    return 0;
}

std::string find_max(std::vector<std::string> words){
    std::string result = *std::max_element(words.begin(), words.end(),
        [](const std::string& a, const std::string& b) {
            if (a.length() == b.length()) {
                return a < b;
            }
            return a.length() > b.length();
        });
    return result;
}