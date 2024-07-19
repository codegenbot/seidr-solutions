string result = "";
    for(char c : s){
        if(isalpha(c)){
            result += (c - 'a' + 2 * 2) % 26 + 'a';
        } else {
            result += c;
        }
    }
    return result;
}