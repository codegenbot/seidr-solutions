int vowels_count(string s){
    int count = 0;
    for(int i = 0; i < s.length(); i++){
        if(tolower(s[i]) == 'a' || tolower(s[i]) == 'e' || tolower(s[i]) == 'i' || tolower(s[i]) == 'o' || tolower(s[i]) == 'u'){
            count++;
        }
    }
    if(tolower(s[s.length()-1]) == 'y'){
        count--;
    }
    return count;
}