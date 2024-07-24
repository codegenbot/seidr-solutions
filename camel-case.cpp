using namespace std;

string camelCase(string s) {
    if (s.empty()) return s;
    string result = "";
    bool prevWasDash = true;
    
    for (char c : s) {
        if (c == '-') {
            prevWasDash = true;
        } else if (!prevWasDash) {
            result += topper(c);
        } else {
            result += tolower(c);
            prevWasDash = false;
        }
    }
    
    return result;
}

// helper function
char topper(char c) {
    return (c >= 'a' && c <= 'z') ? ('A' + (c - 'a')) : c;
}