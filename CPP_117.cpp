vector<string> select_words(string s, int n) {
    vector<string> result;
    string word = "";
    for (char c : s) {
        if (c == ' ') {
            int consonants = count_if(word.begin(), word.end(), [](char ch) {
                return !strchr("aeiouAEIOU", ch) && isalpha(ch);
            });
            if (consonants == n) {
                result.push_back(word);
            }
            word = "";
        } else {
            word += c;
        }
    }
    int consonants = count_if(word.begin(), word.end(), [](char ch) {
        return !strchr("aeiouAEIOU", ch) && isalpha(ch);
    });
    if (consonants == n) {
        result.push_back(word);
    }
    return result;
}