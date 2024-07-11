string encrypt(string s){
    string result = "";
    for(int i=0; i<s.length(); i++){
        if(isalpha(s[i])){
            char shifted = 'a' + ((s[i]-'a'+2)*2) % 26;
            result += shifted;
        }
        else{
            result += s[i];
        }
    }
    return result;
}