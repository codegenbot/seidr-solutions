int vowels_count(string s){
    int count = 0;
    for(int i=0; i<s.length(); i++){
        char ch = tolower(s[i]);
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
            count++;
        }
        else if(i==s.length()-1 && ch == 'y'){
            count++;
        }
    }
    return count;
}