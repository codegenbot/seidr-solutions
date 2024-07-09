bool is_happy(string s){
    if(s.length() < 3) return false;
    for(int i = 0; i <= s.length()-3; i++){
        string sub = s.substr(i,3);
        int flag = 1;
        for(int j = 0; j < 3; j++){
            for(int k = j+1; k < 3; k++){
                if(sub[j] == sub[k]) {
                    flag = 0;
                    break;
                }
            }
            if(flag == 0) break;
        }
        if(flag == 0) return false;
    }
    return true;
}