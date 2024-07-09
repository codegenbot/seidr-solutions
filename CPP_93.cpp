string encode(string message) {
    string result = "";
    for (char c : message) {
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            c = (c <= base + 3 && c >= base) ? c : 
                (isupper(c) ? 'z' - 3 : 'Z') - 2;
        }
        result += tolower(c);
    }
    return result;
}