string encrypt(string s){
    string encrypted = "";
    for(int i=0; i<s.length(); i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            char c = ((s[i] - 'a') + (2 * 2)) % 26 + 'a';
            encrypted += c;
        }
        else if(s[i] >= 'A' && s[i] <= 'Z'){
            char c = ((s[i] - 'A') + (2 * 2)) % 26 + 'A';
            encrypted += c;
        }
        else{
            encrypted += s[i];
        }
    }
    return encrypted;
}