bool is_happy(string s){
    if(s.length() < 3) return false;
    for(int i = 0; i <= s.length()-3; i++){
        string temp = s.substr(i, 3);
        bool unique = true;
        for(char c : temp){
            if(temp.find(c) != temp.npos && temp.find(c) != i){
                unique = false;
                break;
            }
        }
        if(unique) return true;
    }
    return false;
}