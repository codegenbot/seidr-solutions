```
string flip_case(string s) {
    string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            char base = isupper(c) ? 'a' : 'A';
            result += tolower(c) == base ? toupper(c) : tolower(c);
        } else {
            result += c;
        }
    }
    return result;
}