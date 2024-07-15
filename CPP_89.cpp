string encrypt(string s){
    string result = "";
    for(int i=0; i<s.length(); i++){
        if(s[i] >= 'a' && s[i] <= 'i'){
            result += (char)(((s[i]-'a'+2*2)%26+'a'));
        }
        else if(s[i] >= 'j' && s[i] <= 'o'){
            result += (char)(((s[i]-'j'+2*2)%26+'j')-1);
        }
        else if(s[i] >= 'p' && s[i] <= 'x'){
            result += (char)(((s[i]-'p'+2*2)%26+'p'));
        }
        else if(s[i] >= 'y' && s[i] <= 'z'){
            result += (char)(((s[i]-'y'+2*2)%26+'y')-1);
        }
        else
            result += s[i];
    }
    return result;
}