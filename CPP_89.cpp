string encrypt(string s){
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    string result = "";
    
    for(int i=0; i<s.length(); i++){
        char c = tolower(s[i]);
        
        if(c < 'a' + 2 || c > 'z'){
            result += c;
            continue;
        }
        
        int pos = (c - 'a') % 26;
        pos = (pos + 2 * 2) % 26; // shift down by two multiplied to two places
        
        result += alphabet[pos];
    }
    
    return result;
}