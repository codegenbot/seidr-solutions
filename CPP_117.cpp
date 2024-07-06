vector<string> select_words(string s, int n) {
    vector<string> result;
    string word;
    int consonants = 0;

    for (char c : s) {
        if (c == ' ') {
            if (consonants == n) {
                result.push_back(word);
                word.clear();
                consonants = 0;
            } else {
                word.clear();
                consonants = 0;
            }
        } else if (!isalpha(c)) {
            continue;
        } else if (!islower(c)) {
            c = tolower(c);
        }

        for (char d : "bcdfghjklmnpqrstvwxyz") {
            if (c == d) {
                consonants++;
                break;
            }
        }

        word += c;
    }

    if (consonants == n) {
        result.push_back(word);
    }

    return result;
}