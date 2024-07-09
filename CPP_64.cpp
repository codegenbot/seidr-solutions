int vowels_count(string s){
    int count = 0;
    for(int i=0; i<s.length();i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            count++;
    }
    // Check for 'y' at the end of the string
    if(i < s.length() && s[i] == 'y') 
        count++;
    return count;
}