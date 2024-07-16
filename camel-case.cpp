Here is the solution:

string camelCase(string s) {
    string result = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '-') {
            i++; // skip the '-'
            while (i < s.size() && s[i] == ' ') {
                i++; // skip the spaces
            }
            result += toupper(s[i]); // capitalize the first letter of each word
        } else if (result.empty()) {
            result += tolower(s[i]); // lowercase the first letter of the string
        } else {
            result += s[i]; // add all other letters as they are
        }
    }
    return result;
}