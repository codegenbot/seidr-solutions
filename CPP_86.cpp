string anti_shuffle(string s) {
    string result = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ' ') {
            result += " ";
            continue;
        }
        string word = "";
        bool first = true;
        for (int j = i; j < s.size() && s[j] != ' '; j++) {
            if (!first) {
                word.push_back(s[j]);
            } else {
                first = false;
            }
        }
        string newWord = "";
        for (char c : word) {
            newWord += (char)(c);
        }
        result += newWord;
        i += word.size() - 1;
    }
    return result;
}