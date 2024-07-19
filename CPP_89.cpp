string encrypt(string s){
    string result = "";
    for(char& c : s){
        if(isalpha(c)){
            char encrypted = c + 2 * ('z' - c) + 1;
            if(encrypted > 'z') encrypted = 'a' + (encrypted - 'z' - 1);
            result += encrypted;
        } else {
            result += c;
        }
    }
    return result;
}