string anti_shuffle(string s) {
    string result = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ' ') {
            result += ' ';
        } else {
            char c = s[i];
            while (c != ' ') {
                int pos = 0;
                for (char d = 'a'; d <= 'z'; d++) {
                    if (d > c) break;
                    if (d == c) pos++;
                }
                result += string(1, d - 1 + pos);
                c++;
            }
        }
    }
    return result;
}