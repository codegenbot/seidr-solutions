vector<string> select_words(string s, int n) {
    vector<string> words;
    int count = 0;
    string word = "";

    for (char c : s) {
        if (c == ' ') {
            if (count == n) {
                words.push_back(word);
            }
            word = "";
            count = 0;
        } else {
            if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') {
                count++;
            }
            word += c;
        }
    }

    if (count == n) {
        words.push_back(word);
    }

    return words;
}