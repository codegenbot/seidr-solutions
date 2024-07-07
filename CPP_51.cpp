```
string str = "";
for (char c : text) {
    if (!isalpha(c)) {
        str += c;
    } else {
        char ch = tolower(c);
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u') {
            str += c;
        }
    }
}
return str;