string encrypt(string s){
    string encrypted = "";
    for(int i = 0; i < s.length(); i++){
        if(isalpha(s[i])){
            char c = s[i] + 2 * 2;
            if(c > 'z'){
                c = 'a' + (c - 'z') - 1;
            }
            encrypted += c;
        }
    }
    return encrypted;
}