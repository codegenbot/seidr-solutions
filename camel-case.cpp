std::string camelCase(std::string str) {
    std::string result = "";
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '-') {
            if (str.find(' ') == i) {
                result += toupper(str.substr(i+1, 0).erase(0, 1));
                i++;
            } else {
                result += toupper(str[i+1]);
                i++;
            }
        } else if (str[i] != ' ') {
            if (result.length() == 0) {
                result = tolower((char)str[i]);
            } else {
                result += toupper((char)str[i]);
            }
        }
    }
    return result;
}