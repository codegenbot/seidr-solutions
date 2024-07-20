string get_closest_vowel(string word){
    int left = 0, right = word.size() - 1;
    while(left < right){
        if(!isalpha(word[left])){left++; continue;}
        if(!isalpha(word[right])){right--; continue;}
        if(isvowel(tolower(word[left])) || isvowel(tolower(word[right]))){
            if(abs(left-right) == 2) return tolower(word.substr(left+1, right-left-1));
            else if(isvowel(tolower(word[left]))) return tolower(word[left]);
            else return tolower(word[right]);
        }
        left++; right--;
    }
    return "";
}