string anti_shuffle(string s) {
    string result = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ' ') {
            result += " ";
            continue;
        }
        char temp = s[i];
        int j = i + 1;
        while (j < s.size() && s[j] <= temp) {
            j++;
        }
        for (; i < j; i++) {
            result += s[i];
        }
    }
    return result;
}