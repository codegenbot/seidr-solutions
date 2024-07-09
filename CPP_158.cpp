```cpp
#include <algorithm>
#include <vector>
#include <string>

std::string find_max(vector<string> words){
    string max_word = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            if (a.length() == b.length())
                return a < b;
            return a.length() > b.length();
        });
    return max_word;
}

int main() {
    vector<string> words = {"apple", "banana", "cherry"};
    std::cout << "The longest word is: " << find_max(words) << std::endl;
    return 0;
}