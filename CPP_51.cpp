```
string str = "";
for (char c : text) {
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'
        || tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i'
        || tolower(c) == 'o' || tolower(c) == 'u') {
        continue;
    }
    str += c;
}
return str;