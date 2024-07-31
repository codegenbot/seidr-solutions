string encrypt(string s){
    string result = "";
    for(char c : s){
        if(isalpha(c)){
            char shift = islower(c) ? 'a' : 'A';
            result += ((c - shift + 2 * 2) % 26) + shift;
        } else {
            result += c;
        }
    }
    return result;
}