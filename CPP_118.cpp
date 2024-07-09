string get_closest_vowel(string word){
    int left = 0, right = word.size() - 1;
    
    while (left < right) {
        if (!isvowel(word[left])) left++;
        else break;
    }
    
    while (right > left) {
        if (!isvowel(word[right])) right--;
        else break;
    }
    
    for(int i = left; i <= right; i++){
        if(isvowel(word[i])){
            return word.substr(i, 1);
        }
    }
    
    return "";
}

bool isvowel(char c){
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}