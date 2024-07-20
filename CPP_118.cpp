string get_closest_vowel(string word){
    string result = "";
    for(int i = word.size() - 1; i > 0; --i){
        if(isvowel(word[i])){
            int left = i;
            while(left > 0 && !isconsonant(word[left-1])){
                left--;
            }
            if(left != i) result = word.substr(left, i-left);
            break;
        }
    }
    return result;
}

bool isvowel(char c){
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

bool isconsonant(char c){
    c = tolower(c);
    return (!isvowel(c) && c >= 'b' && c <= 'z');
}