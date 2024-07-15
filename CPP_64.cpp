int vowels_count(string s){
    int count = 0;
    for(int i=0; i<s.length(); i++){
        if(i==s.length()-1 && tolower(s[i]) == 'y'){
            return count + 1;
        }
        else if(tolower(s[i]) == 'a' || tolower(s[i]) == 'e'
               || tolower(s[i]) == 'i' || tolower(s[i]) == 'o'
               || tolower(s[i]) == 'u'){
            count++;
        }
    }
    return count;
}