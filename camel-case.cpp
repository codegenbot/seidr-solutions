string camelCase(string s) {
    string result = "";
    bool capitalizeNext = true;
    
    for (char c : s) {
        if (c == '-') {
            capitalizeNext = true;
            result += ' ';
        } else if (capitalizeNext) {
            result += toupper(c);
            capitalizeNext = false;
        } else {
            result += tolower(c);
        }
    }
    
    return result;
}