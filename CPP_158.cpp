```cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

std::string find_max(std::vector<std::string> words) {
    std::string result = *max_element(words.begin(), words.end(),
        [](const std::string& a, const std::string& b) {
            if (a.length() == b.length()) {
                return a > b;
            }
            return a.length() > b.length();
        });
    return result;
}

int main() {
    int n;
    std::cout << "Enter the number of words: ";
    std::cin >> n;

    std::vector<std::string> words(n);
    for (int i = 0; i < n; ++i) {
        std::cout << "Enter word " << i + 1 << ": ";
        std::cin >> words[i];
    }

    std::cout << "The maximum length word is: " << find_max(words) << std::endl;

    return 0;
}