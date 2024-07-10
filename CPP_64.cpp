int vowels_count(string s){
    int count = 0;
    for(char c: s){
        if(strchr("aeiouAEIOUyY", tolower(c)) != nullptr) {
            if(c == 'y' && s.back() != 'y') continue; // Ignore 'y's that are not at the end of the word
            count++;
        }
    }
    return count;
}