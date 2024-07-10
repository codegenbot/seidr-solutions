string result = "";
    for(char c : str){
        if(islower(c)){
            result += toupper(c);
        } else if(isupper(c)){
            result += tolower(c);
        } else {
            result += c;
        }
    }
    return result;
}