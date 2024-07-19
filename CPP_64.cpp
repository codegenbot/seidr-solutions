int vowels_count(string s){
    int count = 0;
    for(char c : s){
        if((c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') &&
           (s.find('y') != s.npos ? c == 'y' && !isupper(c) : true))
            count++;
    }
    return count;
}