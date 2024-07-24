```cpp
#include <iostream>
#include <string>

std::string get_closest_vowel(std::string word) {
    int n = word.size();
    for (int i = n - 1; i > 0; --i) {
        if ("aeiouAEIOU".find(word[i]) != std::string::npos && "aeiouAEIOU".find(word[i-1]) == std::string::npos && "aeiouAEIOU".find(word[i-2]) == std::string::npos)
            return word.substr(i, 1);
    }
    return "";
}

int main() {
    assert(get_closest_vowel("Above") == "o");
    return 0;
}