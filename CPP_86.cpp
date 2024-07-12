string anti_shuffle(string s) {
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            result += ' ';
            continue;
        }
        string temp = "";
        bool firstChar = true;
        for (int j = i; j <= s.length(); j++) {
            temp += s[j];
            i = j - 1;
            break;
        }
        sort(temp.begin(), temp.end());
        result += temp;
    }
    return result;
}