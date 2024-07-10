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
    int n;
    std::cout << "Enter the number of words: ";
    std::cin >> n;
    std::vector<std::string> words;
    for (int i = 0; i < n; ++i) {
        std::string str;
        getline(std::cin, str); 
        words.push_back(str.erase(0, str.find_first_not_of(' ')).erase(str.find_last_not_of(' ') + 1));
    }
    std::cout << "The maximum length word is: " << find_max(words) << std::endl;
    return 0;
}