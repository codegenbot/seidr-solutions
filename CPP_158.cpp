```cpp
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

void findMaxWord(std::vector<std::string>& words) {
    std::string max_word = *std::max_element(words.begin(), words.end(),
        [](const std::string& a, const std::string& b) {
            if (a.length() == b.length()) {
                return a < b;
            }
            return a.length() > b.length();
        });
    std::cout << "Max word is: " << max_word << std::endl;
}

int main() {
    std::vector<std::string> words;
    int n;
    std::cout << "Enter the number of words: ";
    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        std::string temp;
        std::cout << "Enter word " << (i + 1) << ": ";
        getline(std::cin, temp); 
        temp.erase(0, temp.find_first_not_of(" \t")); // remove leading spaces
        temp.erase(temp.find_last_not_of(" \t")+1);      // and trailing ones
        words.push_back(temp);
    }

    findMaxWord(words);
    return 0;
}