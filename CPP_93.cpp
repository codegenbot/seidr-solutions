string encode(string message) {
    string result = "";
    
    for (char c : message) {
        if (isalpha(c)) {
            char newC = (islower(c)) ? (c >= 'a' && c <= 'z') ? c + 3 : c - 19 : toupper((c >= 'A' && c <= 'Z')) ? ((c - 'A' + 3) % 26 + 'A') : ((c - 'A' - 19) % 26 + 'A');
            result += tolower(isupper(newC)) ? toupper(newC) : tolower(newC);
        } else {
            result += c;
        }
    }
    
    return result;
}