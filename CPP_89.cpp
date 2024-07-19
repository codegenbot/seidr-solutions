string encrypt(string s){
    string result = "";
    for(char& c : s){
        if(isalpha(c)){
            if(islower(c)){
                result += (c - 'a' + 2 * 2) % 26 + 'a';
            } else{
                result += (c - 'A' + 2 * 2) % 26 + 'A';
            }
        } else{
            result += c;
        }
    }
    return result;
}