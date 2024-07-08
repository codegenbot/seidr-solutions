```c++
string CamelCase(string s) {
    string result = "";
    bool capitalizeNext = false;
    
    for (char c : s) {
        if (c == '-' || c == ' ') {
            if (!result.empty()) {
                if (!capitalizeNext) {
                    result[0] = toupper(result[0]);
                }
            }
            result += " ";
            capitalizeNext = true;
        } else if (capitalizeNext) {
            result += toupper(c);
            capitalizeNext = false;
        } else {
            result += tolower(c);
        }
    }
    
    return result;
}