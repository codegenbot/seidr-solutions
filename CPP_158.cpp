```cpp
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
    std::vector<std::string> words;
    std::cout << "Enter the number of words: ";
    int n;
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        std::cout << "Enter word " << i + 1 << ": ";
        std::string str;
        std::cin >> str;
        std::cin.getline(str.data(), str.length() + 1);
        words.push_back(str);
    }
    std::cout << "The maximum length word is: " << find_max(words) << std::endl;
    return 0;
}