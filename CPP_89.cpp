string encrypt(string s){
    string result = "";
    for(char c : s){
        if(isalpha(c)){
            if(isupper(c)){
                c = ((c - 'A') + 2 * 2) % 26 + 'A';
            }
            else{
                c = ((c - 'a') + 2 * 2) % 26 + 'a';
            }
        }
        result += c;
    }
    return result;
}