vector<string> select_words(string s, int n) {
    vector<string> words;
    string word = "";

    for (char c : s) {
        if (c != ' ') {
            word += c;
        } else {
            int consonants = 0;
            for (char ch : word) {
                if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' &&
                    ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U') {
                    consonants++;
                }
            }
            if (consonants == n) {
                words.push_back(word);
            }
            word = "";
        }
    }

    int consonants = 0;
    for (char ch : word) {
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' &&
            ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U') {
            consonants++;
        }
    }
    if (consonants == n) {
        words.push_back(word);
    }

    return words;
}