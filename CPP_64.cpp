Here is the solution:

int vowels_count(string s){
    int count = 0;
    for(int i=0; i<s.size(); i++){
        if((s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') 
           && (i == s.size()-1 || !isupper(s[i]))){
            count++;
        }
    }
    return count;
}