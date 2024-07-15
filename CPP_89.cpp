string encrypt(string s) {
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        if (isalpha(c)) {
            if (islower(c)) {
                if ((c - 'a' + 4 * 2) > 'z') {
                    result += (char)(((c - 'a' + 4 * 2) % 26) + 'a');
                } else {
                    result += (char)(c + 4 * 2);
                }
            } else if (isupper(c)) {
                if ((c - 'A' + 4 * 2) > 'Z') {
                    result += (char)(((c - 'A' + 4 * 2) % 26) + 'A');
                } else {
                    result += (char)(c + 4 * 2);
                }
            }
        } else {
            result += c;
        }
    }
    return result;
}