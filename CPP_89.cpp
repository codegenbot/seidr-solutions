string encrypt(string s){
    string result = "";
    for(int i=0; i<s.length(); i++){
        if(s[i] >= 'a' && s[i] <= 'm'){
            result += (char)(s[i]-'a'+2*'a'-'m'-1);
        }
        else if(s[i] >= 'n' && s[i] <= 'z'){
            result += (char)(s[i]-'n'+2*'n'-26-1);
        }
        else{
            result += s[i];
        }
    }
    return result;
}