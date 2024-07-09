bool is_happy(string s){
    if(s.length() < 3) return false;
    for(int i=0; i<s.length()-2; i++){
        bool unique = true;
        for(int j=i; j<i+3 && j<s.length(); j++){
            for(int k=j+1; k<j+3 && k<s.length(); k++){
                if(s[j] == s[k]) {
                    unique = false;
                    break;
                }
            }
            if(!unique) break;
        }
        if(unique) return true;
    }
    return false;
}