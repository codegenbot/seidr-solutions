string encrypt(string s){
    string result = "";
    for(int i=0; i<s.length(); i++){
        if(s[i] >= 'a' && s[i] <= 'i'){
            result += (char)((s[i]-'a'+2*2)%26+'a');
        } else if(s[i] >= 'j' && s[i] <= 'm'){
            result += (char)((s[i]-'j'+4*2)%26+'j');
        } else if(s[i] >= 'n' && s[i] <= 'v'){
            result += (char)((s[i]-'n'+6*2)%26+'n');
        } else if(s[i] >= 'w' && s[i] <= 'z'){
            result += (char)((s[i]-'w'+8*2)%26+'w');
        } else {
            result += s[i];
        }
    }
    return result;
}