string encrypt(string s){
    string result = "";
    for(char c : s){
        if(c >= 'a' && c <= 'z'){
            result += (char)((((c - 'a' + 2) * 2) % 26) + 'a');
        }
    }
    return result;
}