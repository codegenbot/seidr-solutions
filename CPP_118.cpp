```cpp
#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string get_closest_vowel(std::string word) {
        int closest = -1;
        for(int i=0; i<word.size(); ++i){
            if(isalpha(word[i])){
                if(vowel(tolower(word[i]))){
                    if(closest == -1 || i < closest)
                        closest = i;
                }
            }
        }
        return closest != -1 ? word.substr(closest, 1) : "";
    }

    bool vowel(char c) {
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
                c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    }

    assert(get_closest_vowel("Above") == "o");
    return 0;
}