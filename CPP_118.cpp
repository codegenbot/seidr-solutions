string get_closest_vowel(string word){
    for(int i = word.size() - 1; i > 0; --i){
        if(vowels.find(tolower(word[i])) != std::string::npos || 
           tolower(word[i]) == 'Y'){
            for(int j = i-1; j >= 0; --j){
                if(!isvowel(word[j])){
                    break;
                }
                if(j == 0 || !isvowel(word[j-1])){
                    return to_string(word[i]);
                }
            }
        }
    }
    return "";
}

bool isvowel(char c){
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}