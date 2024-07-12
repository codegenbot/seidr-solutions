```cpp
for(int i=0; i<str.length(); i++){
    char c = str[i];
    if(c >= 'a' && c <= 'z')
        result += toupper((char)c);
    else if(c >= 'A' && c <= 'Z')
        result += tolower((char)c);
    else
        result += c;
}