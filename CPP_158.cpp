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

int main() 
{
    int n;
    std::cout << "Enter the number of words: ";
    std::cin >> n;
    std::vector<std::string> words;
    for (int i = 0; i < n; ++i) {
        std::string str;
        std::getline(std::cin, str); 
        size_t pos = str.find_first_not_of(' ');
        if(pos != std::string::npos && pos < str.size()) { 
            str.erase(0, pos); 
        }
        while (str.back() == ' ') {
            str.pop_back();
        }
        words.push_back(str);
    }
    std::cout << "The maximum length word is: " << find_max(words) << std::endl;
}