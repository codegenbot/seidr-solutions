#include <string>
#include <cctype>

std::string get_closest_vowel(std::string word){
    std::string result = "";
    for(int i = word.length() - 1; i >= 0; i--){
        if(vowel(word[i])){
            int left = i;
            while(left > 0 && !consonant(word[left-1])) left--;
            result = word.substr(left-1, 1);
            return result;
        }
    }
    return "";
}

bool vowel(char c){
    c = std::tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

bool consonant(char c){
    c = std::tolower(c);
    return (!vowel(c) && (c >= 'b' && c <= 'z'));
}

int main() {
    assert(get_closest_vowel("Above") == "o");
    return 0;
}