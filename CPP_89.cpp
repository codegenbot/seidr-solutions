string encrypt(string s){
    string result = "";
    for(int i=0; i<s.length(); i++){
        if(s[i] >= 'a' && s[i] <= 'm'){
            result += (char)(s[i] - 2);
        } else if(s[i] >= 'n' && s[i] <= 'z'){
            result += (char)(s[i] + 20);
        } else {
            result += s[i];
        }
    }
    return result;
}