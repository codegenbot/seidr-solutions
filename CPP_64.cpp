int vowels_count(string s){
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    int count = 0;
    char last_char = s.back();
    for(char c : s){
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || (c == 'y' && c == last_char))
            count++;
    }
    return count;
}