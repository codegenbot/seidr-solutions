```
string encode_shift(string s) {
    // takes as input string and returns encoded string
    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        if (c >= 'a' && c <= 'z') {
            c += 5;
            if (c > 'z') {
                c -= 26;
            }
        } else if (c >= 'A' && c <= 'Z') {
            c += 5;
            if (c > 'Z') {
                c -= 26;
            }
        }
        s[i] = c;
    }
    return s;
}
```