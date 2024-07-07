string encrypt(string s){
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    string result = "";
    for(int i=0; i<s.size(); i++){
        char c = tolower(s[i]);
        int index = alphabet.find(c);
        if(index != -1){
            index = (index + 2*2) % 26;
            result += alphabet[index];
        } else {
            result += s[i];
        }
    }
    return result;
}