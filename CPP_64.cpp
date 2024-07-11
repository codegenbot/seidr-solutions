int vowels_count(string s){
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    int count = 0;
    char lastChar = s.back();
    for(char c : s){
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || (c == 'y' && c == lastChar)) {
            count++;
        }
    }
    return count;
}