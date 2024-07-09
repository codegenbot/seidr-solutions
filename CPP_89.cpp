string encrypt(string s){
    string result = "";
    for(int i = 0; i < s.length(); i++){
        char c = s[i];
        if(c >= 'a' && c <= 'z'){
            int index = (c - 'a' + 2*2) % 26;
            result += 'a' + index;
        }else if(c >= 'A' && c <= 'Z'){
            int index = (c - 'A' + 2*2) % 26;
            result += 'A' + index;
        }else{
            result += c;
        }
    }
    return result;
}