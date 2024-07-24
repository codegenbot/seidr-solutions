vector<string> select_words(string s, int n) {
    vector<string> result;
    string word = "";
    int consonant_count = 0;

    for (char c : s) {
        if (c != ' ') {
            word += c;
            if (!isVowel(c)) {
                consonant_count++;
            }
        } else {
            if (consonant_count == n) {
                result.push_back(word);
            }
            word = "";
            consonant_count = 0;
        }
    }

    if (consonant_count == n) {
        result.push_back(word);
    }

    return result;
}

bool isVowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}