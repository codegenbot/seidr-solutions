using namespace std;

string camelCase(string s) {
    if (s.empty()) return "";
    
    string result = "";
    bool prevWasDash = true;
    
    for (char c : s) {
        if (c == '-') {
            prevWasDash = true;
        } else {
            if (prevWasDash) {
                result += toupper(c);
                prevWasDash = false;
            } else {
                result += tolower(c);
            }
        }
    }
    
    return result;
}