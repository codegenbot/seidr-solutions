for(int i=0; i<str.length(); i++){
    if(str[i] >= 'a' && str[i] <= 'z'){
        str[i] = toupper(str[i]);
    } else {
        str[i] = tolower(str[i]);
    }
}
return str;