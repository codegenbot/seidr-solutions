int count_upper(string s){
    int count = 0;
    for(int i=1; i<s.length() && i<=s.length(); i=i+2){
        if(isupper(s[i-1]-'a')){
            count++;
        }
    }
    return count;
}