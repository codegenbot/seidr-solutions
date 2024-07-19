int vowels_count(string s){
    int count = 0;
    string vowels = "aeiou";
    for(int i = 0; i < s.length(); ++i){
        if(vowels.find(tolower(s[i])) != string::npos){
            if(i == s.length()-1 || tolower(s[i]) == 'y'){
                count++;
            }
        }
    }
    return count;
}