bool is_happy(string s){
    int n = s.size();
    if(n < 3) return false; // string length less than 3 is not happy
    for(int i=0; i<=n-3; i++){
        bool unique = true;
        for(int j=i; j<i+3; j++){
            if(s[j] == s[(j+1)%3]) {
                unique = false;
                break;
            }
        }
        if(unique) return true;
    }
    return false;
}