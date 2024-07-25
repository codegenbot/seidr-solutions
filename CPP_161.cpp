string result = "";
    for(char &c : s){
        if(isalpha(c)){
            c = islower(c) ? toupper(c) : tolower(c);
        }
        result = c + result;
    }
    return result;
}