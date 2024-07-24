using namespace std;

string camelCase(string s) {
    if (s[0] == '-') s = s.substr(1);
    string result = "";
    bool capitalizeNext = true;
    
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '-') {
            s = s.substr(i + 1);
            capitalizeNext = true;
        } else if (capitalizeNext) {
            result += toupper(s[i]);
            capitalizeNext = false;
        } else {
            result += tolower(s[i]);
        }
    }
    
    return result;
}