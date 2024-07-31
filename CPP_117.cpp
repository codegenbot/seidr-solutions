vector<string> select_words(string s, int n) {
    vector<string> result;
    if (s.empty()) {
        return result;
    }
    string word;
    bool isConsonant[26] = {false};
    isConsonant['a' - 'a'] = isConsonant['e' - 'a'] = isConsonant['i' - 'a'] = isConsonant['o' - 'a'] = isConsonant['u' - 'a'] = true;

    for (char c : s) {
        if (c == ' ') {
            if (!word.empty()) {
                int consonantCount = count_if(word.begin(), word.end(), [&](char ch) { return !isConsonant[tolower(ch) - 'a']; });
                if (consonantCount == n) {
                    result.push_back(word);
                }
                word.clear();
            }
        } else {
            word += c;
        }
    }

    if (!word.empty()) {
        int consonantCount = count_if(word.begin(), word.end(), [&](char ch) { return !isConsonant[tolower(ch) - 'a']; });
        if (consonantCount == n) {
            result.push_back(word);
        }
    }

    return result;
}