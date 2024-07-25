string encrypt(string s){
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    string result = "";
    for(int i=0; i<s.length(); i++){
        char c = s[i];
        if(c >= 'a' && c <= 'z'){
            int index = (int)(c - 'a');
            index = (index + 2*2) % 26;
            result += alphabet[index];
        } else {
            result += c;
        }
    }
    return result;
}