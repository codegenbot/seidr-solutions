string kebabToCamel(string str) {
    string result = "";
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '-') {
            while (i+1 < str.length() && str[i+1] == ' ') {
                i++;
            }
            if (i+1 < str.length()) {
                result += toupper(str[++i]);
            }
        } else if (str[i] == ' ') {
            if (!result.empty()) {
                result[0] = tolower(result[0]);
            }
            result += ' ';
        } else {
            if (!result.empty()) {
                result[0] = tolower(result[0]);
            }
            result += str[i];
        }
    }
    return result;
}