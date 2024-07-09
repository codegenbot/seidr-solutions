int i=0;
while(i<str.length()){
    if(str[i] >= 'a' && str[i] <= 'z')
        str.replace(i,1,toupper(str[i]));
    else
        str.replace(i,1_tolower(str[i]));
    i++;
}
return str;