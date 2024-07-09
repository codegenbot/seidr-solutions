string alphabet = "abcdefghijklmnopqrstuvwxyz";
    string encrypted = "";
    for(char ch : s){
        if(isalpha(ch)){
            size_t pos = alphabet.find(tolower(ch));
            pos = (pos + 2) * 2 % 26;
            encrypted += isupper(ch) ? toupper(alphabet[pos]) : alphabet[pos];
        } else {
            encrypted += ch;
        }
    }
    return encrypted;
}