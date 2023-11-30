string encrypt(string s){
    string encrypted = "";
    for(int i=0; i<s.length(); i++){
        if(isalpha(s[i])){
            if(isupper(s[i])){
                encrypted += char((s[i]-'A'+2*2)%26 + 'A');
            }
            else{
                encrypted += char((s[i]-'a'+2*2)%26 + 'a');
            }
        }
        else{
            encrypted += s[i];
        }
    }
    return encrypted;
}