string anti_shuffle(string s) {
    string result = "";
    int start = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ' || i == s.length()-1) {
            string word = s.substr(start, i - start + 1);
            sort(word.begin(), word.end());
            result += word + " ";
            start = i + 1;
        }
    }
    return result;
}