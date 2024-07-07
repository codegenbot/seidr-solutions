char temp;
for(int i = 0; i < str.length(); i++) {
    temp = str[i];
    if(temp >= 'a' && temp <= 'z')
        str[i] = temp - ('a' - 'A');
    else if(temp >= 'A' && temp <= 'Z')
        str[i] = temp - ('A' - 'a');
}
return str;