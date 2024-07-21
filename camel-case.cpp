Here is the solution:

string camelCase(string s) {
    string res = "";
    int count = 0;
    for(int i=0; i<s.length(); i++) {
        if(s[i] == '-') {
            res += toupper(s[i+1]);
            i++;
            while(i < s.length() && (s[i] == '-' || s[i] == ' ')) {
                i++;
            }
            count = 0;
        } else if(count > 0) {
            res += tolower(s[i]);
            count++;
        } else {
            res += s[i];
            count = 1;
        }
    }
    return res;
}