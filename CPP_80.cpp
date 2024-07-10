bool is_happy(string s){
    if(s.length() < 3) return false;
    for(int i = 0; i <= s.length()-3; i++){
        string str = s.substr(i, 3);
        bool unique = true;
        for(char c : str){
            if(find(str.begin(), str.end(), c) == str.end())
                unique = false;
            break;
        }
        if(unique) return true;
    }
    return false;
}