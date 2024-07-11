char temp;
for(int i = 0; i < str.length(); i++) {
    temp = str[i];
    if((temp >= 'a' && temp <= 'z')) {
        temp -= 32; // convert to uppercase
    } else if((temp >= 'A' && temp <= 'Z')) {
        temp += 32; // convert to lowercase
    }
    str[i] = temp;
}
return str;