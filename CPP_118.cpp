string get_closest_vowel(string word){
    for(int i = word.size() - 1; i > 0; --i){
        if(vowel(word[i])){
            int left = i-1;
            while(left >= 0 && !consonant(word[left]))
                left--;
            if(left < i-1)
                return string(1, word[i]);
        }
    }
    return "";
}

bool vowel(char c){return "aeiouAEIOU".find(c) != string::npos;}
bool consonant(char c){return !"aeiouAEIOU".find(c);}