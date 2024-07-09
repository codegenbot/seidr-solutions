bool is_happy(string s){
    if(s.length() < 3) return false;
    for(int i = 0; i < s.length()-2; i++){
        bool distinct = true;
        string sub = s.substr(i, 3);
        for(int j = 0; j < 3; j++){
            for(int k = j+1; k < 3; k++){
                if(sub[j] == sub[k]) distinct = false;
            }
        }
        if(!distinct) return false;
    }
    return true;
}