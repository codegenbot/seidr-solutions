```
string str = "";
for (char c : text) {
    if (!isvowel(c)) {
        str += c;
    }
}
return str;

bool isvowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}