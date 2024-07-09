string flip_case(string s) {
    string result = "";
    for(int i = 0; i < s.length(); i++) {
        if(s[i] >= 'a' && s[i] <= 'z') {
            result += char(toupper(s[i]));
        } else if(s[i] >= 'A' && s[i] <= 'Z') {
            result += char(int('a') + (s[i] - 'A'));
        } else {
            result += s[i];
        }
    }
    return result;
}