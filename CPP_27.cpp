char temp;

for(int i = 0; i < str.length(); i++) {
    temp = tolower(str[i]);
    if(temp == 'a' || temp == 'e' || temp == 'i' || temp == 'o' || temp == 'u') {
        temp = toupper(str[i]);
    } else if(isupper(str[i])) {
        temp = tolower(str[i]);
    }
    str[i] = temp;
}
return str;