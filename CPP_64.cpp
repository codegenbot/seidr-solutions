int vowels_count(string s){
    int count = 0;
    for(int i=0; i<s.size(); i++){
        if(i == s.size() - 1 && s[i] == 'y')
            continue;
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y')
            count++;
    }
    return count;
}