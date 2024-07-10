```cpp
#include<iostream>

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

int main() 
{
    int n;
    std::cout << "Enter the number of words: ";
    std::cin >> n;
    std::vector<std::string> words;
    for (int i = 0; i < n; ++i) {
        std::string str;
        std::getline(std::cin, str); 
        if (!str.empty()) { 
            str = " " + str; // Add a space at the beginning of the word
            str.erase(0, str.find_first_not_of(' ')); // Erase leading spaces
            str.pop_back(); // Remove trailing spaces
            words.emplace_back(str); 
        }
    }
    std::cout << "The maximum length word is: " << find_max(words) << std::endl;
}