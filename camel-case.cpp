```c++
string camelCase(string s) {
    string result = "";
    bool capitalizeNext = false;
    
    for (char c : s) {
        if (c == '-' || c == ' ') { 
            if (!result.empty()) {
                if (capitalizeNext) {
                    result.push_back(toupper(result.back()));
                    capitalizeNext = false;
                }
                result.push_back(' ');
            }
            capitalizeNext = true;
        } else if (capitalizeNext) {
            result += toupper(c);
            capitalizeNext = false;
        } else {
            result += tolower(c);
        }
    }
    
    // remove trailing space and convert first letter to uppercase
    if (!result.empty()) {
        result[0] = toupper(result[0]);
    }
    size_t lastSpacePos = result.find(' ');
    if (lastSpacePos != string::npos) {
        result.erase(lastSpacePos);
    }
    
    return result;
}