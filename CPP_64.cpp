int vowels_count(string s){
    int count = 0;
    for(int i=0; i<s.length(); i++){
        char ch = tolower(s[i]);
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            count++;
        else if(i+1 < s.length() && ch == 'y' && s[i+1] == '\0')
            count++;
    }
    return count;
}