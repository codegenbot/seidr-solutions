string result = str;
    for(int i=0; i<str.length(); i++){
        if(islower(str[i])){
            result[i] = toupper(str[i]);
        }
        else if(isupper(str[i])){
            result[i] = tolower(str[i]);
        }
    }
    return result;
}