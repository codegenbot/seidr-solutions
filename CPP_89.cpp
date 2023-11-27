string encrypt(string s){
    string result = "";
    for(int i=0; i<s.length(); i++){
        if(isalpha(s[i])){
            if(isupper(s[i])){
                result += char((s[i]-'A'+2*2)%26+'A');
            }
            else{
                result += char((s[i]-'a'+2*2)%26+'a');
            }
        }
        else{
            result += s[i];
        }
    }
    return result;
}