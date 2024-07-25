int vowels_count(string s){
    int count = 0;
    for(int i=0; i<s.length(); i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
            count++;
        }
        else if(i+1==s.length() && s[i] == 'y'){
            count++;
        }
    }
    return count;
}