std::string camelCase(std::string s) {
    if (s[0] == '-') s.erase(0, 1); 
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '-') {
            i++;
            while (i < s.length() && s[i] != ' ') {
                if(result.size()==0) result += tolower(s[i]);
                else result += toupper(s[i]);
                i++;
            }
            result += " ";
        } else {
            if(result.size()==0) result += tolower(s[i]);
            else result += s[i];
        }
    }
    return result;
}