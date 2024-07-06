bool is_happy(string s){
    if(s.length() < 3) return false;
    for(int i = 0; i < s.length()-2; i++){
        bool distinct = true;
        string sub = s.substr(i, 3);
        for(char c : sub){
            if(sub.find(c) != sub.nfind(c)){
                distinct = false;
                break;
            }
        }
        if(!distinct) return false;
    }
    return true;
}