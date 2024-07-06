vector<string> select_words(string s, int n) {
    vector<string> result;
    string word = "";
    for (char c : s) {
        if (c != ' ') {
            word += c;
        } else if (!word.empty()) {
            bool has_n_consonants = has_n_consonants(word, n);
            if (has_n_consonants) {
                result.push_back(word);
            }
            word = "";
        }
    }
    if (!word.empty() && has_n_consonants(word, n)) {
        result.push_back(word);
    }
    return result;
}

bool has_n_consonants(string s, int n) {
    int consonant_count = 0;
    for (char c : s) {
        if (!isalpha(c)) continue;
        char lower_c = tolower(c);
        if (lower_c != 'a' && lower_c != 'e' && lower_c != 'i' && lower_c != 'o' && lower_c != 'u') {
            consonant_count++;
        }
    }
    return consonant_count == n;
}