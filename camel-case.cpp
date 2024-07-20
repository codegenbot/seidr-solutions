Here is the solution:

string camelCase(string s) {
    string result = "";
    int i = 0;
    while(i < s.length()) {
        if(s[i] == '-') {
            i++;
            while(i < s.length() && s[i] != ' ') i++;
            if(i < s.length())
                result += toupper(s[i]) + tolower(string(1, s[i+1]));
            else
                break;
        } else if(s[i] == ' ') {
            i++;
            while(i < s.length() && s[i] == ' ') i++;
            if(i < s.length())
                result += toupper(s[i-1]);
            else
                break;
        } else {
            if(result.size() == 0)
                result = tolower(string(1, s[i]));
            else
                result += s[i];
        }
    }
    return result;
}