string encrypt(string s){
    string encrypted = "";
    for(int i = 0; i < s.length(); i++){
        if(isalpha(s[i])){
            char c = s[i] + (2 * 2);
            if(c > 'z'){
                c = c - 'z' + 'a' - 1;
            }
            encrypted += c;
        }
        else{
            encrypted += s[i];
        }
    }
    return encrypted;
}