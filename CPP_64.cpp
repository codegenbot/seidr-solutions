int vowels_count(string s){
    int count = 0;
    for(char c : s){
        if(strchr("aeiouAEIOUyY", c) != nullptr){
            if(c == 'y' && s.find('y') == s.length()-1)
                continue;
            count++;
        }
    }
    return count;
}