bool is_happy(string s){
    if(s.length() < 3) return false;
    for(int i = 0; i <= s.length()-3; i++){
        string temp = s.substr(i, 3);
        bool flag = true;
        for(int j = 1; j < 3; j++){
            if(temp[j-1] == temp[j]) {
                flag = false;
                break;
            }
        }
        if(!flag) return false;
    }
    return true;
}