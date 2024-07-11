```cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

int main() {
    std::vector<std::string> words;
    int n;
    std::cout << "Enter the number of words: ";
    std::cin >> n;
    for(int i=0; i<n; i++) {
        std::string word;
        std::cout << "Enter a word: ";
        std::cin >> word;
        words.push_back(word);
    }
    std::cout << "The maximum word is: " << find_max(words) << std::endl;
    return 0;
}

std::string find_max(vector<string> words){
    string result = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            if (a.length() == b.length()) {
                return a < b;
            }
            return a.length() > b.length();
        });
    return result;
}