string result = "";
    for(char c : s){
        if(isalpha(c)){
            char encrypted = c + 2 * ('z' - c >= 2 ? 2 : -24);
            if(!isalpha(encrypted)){
                encrypted = 'a' + (encrypted - 'z' - 1);
            }
            result += encrypted;
        }
        else{
            result += c;
        }
    }
    return result;
}