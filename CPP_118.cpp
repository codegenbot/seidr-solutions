#include<string>

std::string get_closest_vowel(std::string word) {
    std::string result = "";
    for(int i = word.length() - 1; i > 0; --i){
        if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u' ||
           word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || word[i] == 'U'){
            int j = i - 1;
            while(j > 0 && (word[j] != 'a' && word[j] != 'e' && word[j] != 'i' && word[j] != 'o' && 
                           word[j] != 'u' && word[j] != 'A' && word[j] != 'E' && word[j] != 'I' &&
                           word[j] != 'O' && word[j] != 'U')){
                j--;
            }
            if(j >= 0) result = word.substr(j + 1, i - j - 1);
        }
    }
    return result;
}