#include <iostream>
#include <string>

std::string get_closest_vowel(std::string word);

int main() {
    std::string input;
    std::cout << "Enter a word: ";
    std::cin >> input;
    
    std::string closest_vowel = get_closest_vowel(input);
    
    std::cout << "Closest vowel: " << closest_vowel << std::endl;

    return 0;
}

std::string get_closest_vowel(std::string word){
    std::string vowels = "aeiouAEIOU";
    int n = word.size();
    for(int i = n-2; i > 0; i--){
        if(vowels.find(word[i]) != std::string::npos && !isalpha(word[i-1]) && !isalpha(word[i+1])){
            return std::string(1, word[i]);
        }
    }
    return "";
}