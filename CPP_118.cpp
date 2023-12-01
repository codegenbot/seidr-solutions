#include <string>

std::string get_closest_vowel(std::string word){
    std::string vowels = "AEIOUaeiou";
    int n = word.length();
    for(int i = n-2; i >= 1; i--){
        if(vowels.find(word[i]) != std::string::npos && !isalpha(word[i-1]) && !isalpha(word[i+1])){
            return std::string(1, word[i]);
        }
    }
    return "";
}

int main() {
    assert(get_closest_vowel("Above") == "o");
    return 0;
}