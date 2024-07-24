std::string camelCase(std::string s) {
    if (s[0] == '-') s.erase(0, 1); 
    std::string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '-') {
            i++;
            while (i < s.length() && s[i] != ' ') {
                result += std::toupper(s[i]);
                i++;
            }
            if(result.back() != ' ')
                result += " ";
        } else {
            result += std::tolower(s[i]);
        }
    }
    return result;
}