for(int i=0; i<str.length(); i++){
    if(str[i] >= 'a' && str[i] <= 'z')
        str[i] = (char)(str[i]-32);
    else if(str[i] >= 'A' && str[i] <= 'Z')
        str[i] = (char)(str[i]+32);
}
return str;