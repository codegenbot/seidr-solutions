#include <string>
#include <iostream>

std::string get_closest_vowel(std::string word){
    int n = word.length();
    for(int i=n-2; i>0; i--){
        if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u' ||
           word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || word[i] == 'U'){
            if((word[i-1] >= 'b' && word[i-1] <= 'z' && word[i-1] != 'y' && word[i-1] != 'Y') &&
               (word[i+1] >= 'b' && word[i+1] <= 'z' && word[i+1] != 'y' && word[i+1] != 'Y')){
                return std::string(1, word[i]);
            }
        }
    }
    return "";
}

int main() {
    std::cout << (get_closest_vowel("Above") == "o") << std::endl;
    // Add more test cases if needed

    return 0;
}