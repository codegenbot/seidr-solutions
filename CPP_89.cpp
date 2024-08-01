string encrypt(string s){
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    string result = "";
    for(int i=0; i<s.length(); i++){
        char c = tolower(s[i]);
        int index = alphabet.find(c);
        if(index != -1){
            if(index + (2*2) >= 26)
                result += alphabet[(index+2)%26];
            else
                result += alphabet[index+4];
        }
        else{
            result+= c;
        }
    }
    return result;
}