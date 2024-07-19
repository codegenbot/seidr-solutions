string encrypt(string s){
    string result = s;
    for (int i = 0; i < s.length(); i++) {
        if (isalpha(s[i])) {
            char newChar = s[i] + 2 * 2;
            if ((isupper(s[i]) && newChar > 'Z') || (islower(s[i]) && newChar > 'z')) {
                newChar -= 26;
            }
            result[i] = newChar;
        }
    }
    return result;
}