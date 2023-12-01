vector<string> select_words(string s, int n) {
    vector<string> result;

    if (s.empty()) {
        return result;
    }

    // Split the string into words
    vector<string> words;
    string word;
    for (char c : s) {
        if (c == ' ') {
            if (!word.empty()) {
                words.push_back(word);
                word.clear();
            }
        } else {
            word += c;
        }
    }
    if (!word.empty()) {
        words.push_back(word);
    }

    // Check each word for the number of consonants
    for (string word : words) {
        int consonantCount = 0;
        for (char c : word) {
            c = tolower(c);
            if (c >= 'a' && c <= 'z' && c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') {
                consonantCount++;
            }
        }
        if (consonantCount == n) {
            result.push_back(word);
        }
    }

    return result;
}