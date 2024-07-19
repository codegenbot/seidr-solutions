string result = "";
    for(char c : s){
        if(isalpha(c)){
            char encrypted = (tolower(c) - 'a' + 2 * 2) % 26 + 'a';
            result += encrypted;
        } else {
            result += c;
        }
    }
    return result;
}