vector<string> select_words(string s, int n) {
    vector<string> result;
    string current_word;
    int consonant_count = 0;

    for (char c : s) {
        if (isalpha(c)) {
            if (tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u') {
                if (!current_word.empty() && consonant_count == n) {
                    result.push_back(current_word);
                    current_word.clear();
                    consonant_count = 0;
                }
            } else {
                current_word += c;
                consonant_count++;
            }
        } else {
            if (!current_word.empty() && consonant_count == n) {
                result.push_back(current_word);
                current_word.clear();
                consonant_count = 0;
            }
        }
    }

    if (!current_word.empty() && consonant_count == n) {
        result.push_back(current_word);
    }

    return result;
}