int vowels_count(string s){
    int count = 0;
    string vowels = "aeiouy";
    for(char c : s){
        if(vowels.find(tolower(c)) != string::npos){
            if(tolower(c) == 'y' && s[s.size()-1] != c){
                continue;
            }
            count++;
        }
    }
    return count;
}