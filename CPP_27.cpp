int i = 0;
while(i < str.length()){
    if(str[i] >= 'a' && str[i] <= 'z')
        str[i] -= ('a' - 'A');
    else if(str[i] >= 'A' && str[i] <= 'Z')
        str[i] += ('a' - 'A');
    i++;
}
return str;