vector<string> select_words(string s, int n) {
    vector<string> result;
    string word;
    string vowels = "aeiouAEIOU";

    for (char c : s) {
        if (c == ' ') {
            if (!word.empty()) {
                int consonant_count = 0;
                for (char wc : word) {
                    if (vowels.find(wc) == string::npos) {
                        consonant_count++;
                    }
                }
                if (consonant_count == n) {
                    result.push_back(word);
                }
                word.clear();
            }
        } else {
            word += c;
        }
    }

    if (!word.empty()) {
        int consonant_count = 0;
        for (char wc : word) {
            if (vowels.find(wc) == string::npos) {
                consonant_count++;
            }
        }
        if (consonant_count == n) {
            result.push_back(word);
        }
    }

    return result;
}