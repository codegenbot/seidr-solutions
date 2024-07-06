string encode(string message) {
    string result = "";
    
    for (char c : message) {
        if (isalpha(c)) {
            char newC = (c >= 'a' && c <= 'z') ? (c - 'a' + 3) % 26 + 'a' :
                (c >= 'A' && c <= 'Z') ? (c - 'A' - 19) % 26 + 'A' : c;
            result += tolower(isupper(newC)) ? toupper(newC) : tolower(newC);
        } else {
            result += c; // preserve non-alphabetic characters
        }
    }
    
    return result;
}