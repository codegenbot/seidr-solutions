Here is the solution:

string anti_shuffle(string s) {
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            result += " ";
        } else {
            string word;
            while (i < s.length() && s[i] != ' ') {
                word += s[i];
                i++;
            }
            sort(word.begin(), word.end());
            for (char c : word) {
                result += c;
            }
        }
    }
    return result;
}