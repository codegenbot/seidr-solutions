string get_closest_vowel(string word){
    int i = word.size() - 1; // start from right side of the string
    while(i >= 0 && !isvowel(word[i])){
        i--;
    }
    if(i < 0) return ""; // no vowel found
    for(int j = i-1; j>=0;j--){
        if(!isvowel(word[j])) break;
        i = j;
    }
    return word.substr(i,1);
}

bool isvowel(char c){
    c = toupper(c);
    return (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}