Here is the solution:

string camelCase(string str) {
    string result = "";
    for (int i = 0; i < str.length(); ++i) {
        if (str[i] == '-') {
            if (result.length() > 0) {
                result[result.length() - 1] = toupper(result[result.length() - 1]);
            }
            for (++i; i < str.length() && str[i] != '-'; ++i) {
                if (str[i] >= 'A' && str[i] <= 'Z') break;
                result += tolower(str[i]);
            }
        } else {
            if (!result.length()) {
                if (str[i] >= 'A' && str[i] <= 'Z') {
                    result += toupper(str[i]);
                } else {
                    result += tolower(str[i]);
                }
            } else {
                if (str[i] >= 'A' && str[i] <= 'Z') {
                    result += " " + toupper(str[i]);
                } else {
                    result += " " + tolower(str[i]);
                }
            }
        }
    }
    return result;
}