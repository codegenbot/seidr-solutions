int count_upper(string s){
    int count = 0;
    for(int i=1; i<s.length() && i%2==0; i++){
        if(isupper(s[i-1]=='A' || s[i-1] == 'E' || s[i-1] == 'I' || s[i-1] == 'O' || s[i-1] == 'U'))
            count++;
    }
    return count;
}