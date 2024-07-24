string anti_shuffle(string s) {
    string reversed = s;
    reverse(reversed.begin(), reversed.end());
    string result = "";
    int pos = 0;
    for (char c : reversed) {
        if (c == ' ') {
            result += " ";
            continue;
        }
        while (pos < s.length() && s[pos] != c) pos++;
        for (; pos > 0; pos--) {
            result += s[--pos];
        }
    }
    return result;
}