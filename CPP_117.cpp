vector<string> select_words(string s, int n) {
    vector<string> result;
    string word = "";
    int count = 0;

    for (char c : s) {
        if (isalpha(c)) {
            if (tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u') {
                count = 0;
            } else {
                count++;
            }
            word += c;
        } else if (!word.empty()) {
            if (count == n) {
                result.push_back(word);
            }
            word = "";
            count = 0;
        }
    }

    if (!word.empty() && count == n) {
        result.push_back(word);
    }

    return result;
}