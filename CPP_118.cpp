#include <string>
#include <cctype>

std::string get_closest_vowel(std::string word) {
    for(int i = word.size() - 1; i >= 0; --i){
        if(!std::isalpha(word[i])) continue;
        if(std::tolower(word[i]) == 'a' || std::tolower(word[i]) == 'e' ||
           std::tolower(word[i]) == 'i' || std::tolower(word[i]) == 'o' ||
           std::tolower(word[i]) == 'u') {
            for(int j = i - 1; j >= 0; --j){
                if(!std::isalpha(word[j])) break;
                if(std::tolower(word[j]) == 'a' || std::tolower(word[j]) == 'e' ||
                   std::tolower(word[j]) == 'i' || std::tolower(word[j]) == 'o' ||
                   std::tolower(word[j]) == 'u') return std::string(1, tolower(word[i]));
            }
        }
    }
    return "";
}

bool vowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}