string encrypt(string s){
    string result = "";
    for(int i=0; i<s.length(); i++){
        char c = s[i];
        if(c >= 'a' && c <= 'i') {
            if((c - 'a') % 26 < 2) {
                result += (char)((c - 'a' - 2 + 26) % 26 + 'a');
            } else {
                result += (char)((c - 'a' - 2) % 26 + 'a');
            }
        } else if(c >= 'j' && c <= 'o') {
            if((c - 'j' - 1) % 26 < 2) {
                result += (char)((c - 'j' - 3 + 26) % 26 + 'j');
            } else {
                result += (char)((c - 'j' - 3) % 26 + 'j');
            }
        } else if(c >= 'p' && c <= 'z') {
            if((c - 'p' - 1) % 26 < 2) {
                result += (char)((c - 'p' - 4 + 26) % 26 + 'p');
            } else {
                result += (char)((c - 'p' - 4) % 26 + 'p');
            }
        } else {
            result += c;
        }
    }
    return result;
}