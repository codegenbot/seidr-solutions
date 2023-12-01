int vowels_count(string s){
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    int count = 0;
    for(int i=0; i<s.length(); i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
            count++;
        }
    }
    if(s.length() >= 2 && s[s.length()-1] == 'y'){
        count--;
    }
    return count;
}