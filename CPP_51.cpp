```
string str = "";
for (char c : text) {
    if (!isvowel(c)) {
        str += c;
    }
}
return str;

bool isvowel(char c) {
    char small = tolower(c);
    return (small == 'a' || small == 'e' || small == 'i' || small == 'o' || small == 'u');
}