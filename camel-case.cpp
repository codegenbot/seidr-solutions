string camelCase(string s) {
    string result = "";
    bool capitalizeNext = true;

    for (char c : s) {
        if (c == '-') {
            if(capitalizeNext) {
                result += toupper(s.erase(0, s.find(c)+1));
                capitalizeNext = false;
            } 
        } else if (capitalizeNext) {
            result += toupper(c);
            capitalizeNext = false;
        } else {
            result += tolower(c);
        }
    }

    return result;
}