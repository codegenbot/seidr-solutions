```
string str = "";
for (char c : text) {
    if (!isvowel(c)) {
        str += c;
    }
}
return str;

bool isvowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'
            || tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i'
            || tolower(c) == 'o' || tolower(c) == 'u');
}