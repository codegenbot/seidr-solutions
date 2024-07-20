int vowels_count(string s){
    int count = 0;
    string vowels = "aeiou";
    char lastChar = s.back();
    for(char c : s){
        if(vowels.find(tolower(c)) != string::npos){
            if(tolower(c) == 'y' && c == lastChar){
                count++;
            } else if(vowels.find(tolower(c)) != string::npos && c != 'y'){
                count++;
            }
        }
    }
    return count;
}