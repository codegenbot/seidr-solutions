```cpp
string camelCase(string s) {
    string result = "";
    bool capitalizeNext = true;
    
    for (char c : s) {
        if (c == '-') {
            if(capitalizeNext) result += toupper(s.find(c)+1); 
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