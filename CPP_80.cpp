bool is_happy(string s){
    if(s.length() < 3)
        return false;

    for(int i = 0; i <= s.length() - 3; i++){
        string three_chars = s.substr(i, 3);
        bool unique = true;
        for(char c : three_chars){
            if(find(three_chars.begin(), three_chars.end(), c) != three_chars.end()){
                unique = false;
                break;
            }
        }
        if(unique)
            return true;
    }

    return false;
}