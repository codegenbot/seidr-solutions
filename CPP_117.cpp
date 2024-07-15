vector<string> select_words(string s, int n) {
    vector<string> result;
    string word = "";
    for (char c : s) {
        if (c == ' ') {
            int consonant_count = 0;
            for (char w : word) {
                if (isalpha(w) && !strchr("aeiouAEIOU", w)) {
                    consonant_count++;
                }
            }
            if (consonant_count == n) {
                result.push_back(word);
            }
            word = "";
        } else {
            word += c;
        }
    }

    int consonant_count = 0;
    for (char w : word) {
        if (isalpha(w) && !strchr("aeiouAEIOU", w)) {
            consonant_count++;
        }
    }
    if (consonant_count == n) {
        result.push_back(word);
    }

    return result;
}