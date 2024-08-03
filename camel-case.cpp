Here is the solution:

string camelCase(string s) {
    string result = "";
    bool capitalNext = true;
    
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '-') {
            i++; // skip the next character
            capitalNext = true;
        } else if (capitalNext) {
            result += toupper(s[i]);
            capitalNext = false;
        } else {
            result += tolower(s[i]);
        }
    }
    
    return result;
}