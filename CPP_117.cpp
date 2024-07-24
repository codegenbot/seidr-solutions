vector<string> select_words(string s, int n) {
    vector<string> result;
    string word = "";
    for (char c : s) {
        if (isalpha(c)) {
            word += tolower(c);
        } else if (!word.empty()) {
            int count = 0;
            for (char d : word) {
                if (!ispunct(d) && !isspace(d) && !isalpha(d))
                    count++;
            }
            if (count == n)
                result.push_back(word);
            word = "";
        }
    }
    return result;
}