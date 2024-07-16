bool is_happy(const string& s) {
    if(s.length() < 3) return false;
    for(int index=0; index<s.length()-2; index++){
        if(s[index] == s[index+1] || s[index] == s[index+2] || s[index+1] == s[index+2]){
            return false;
        }
    }
    return true;
}