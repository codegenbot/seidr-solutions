string encrypt(string s){
    string result = "";
    for(int i=0; i<s.length(); i++){
        char c = s[i];
        if(c >= 'a' && c <= 'z'){
            int val = (int)c - 97;
            val = (val + 2*2) % 26;
            result += (char)(val+97);
        }
        else if(c >= 'A' && c <= 'Z'){
            int val = (int)c - 65;
            val = (val + 2*2) % 26;
            result += (char)(val+65);
        }
        else{
            result += c;
        }
    }
    return result;
}