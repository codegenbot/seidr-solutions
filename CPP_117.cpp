vector<string> select_words(string s, int n) {
    vector<string> result;
    string word = "";
    int consonants = 0;

    for (char c : s) {
        if (c == ' ') {
            if (consonants == n) {
                result.push_back(word);
            }
            word = "";
            consonants = 0;
        } else if (!isalpha(c)) {
            continue;
        } else {
            bool isConsonant = false;
            for (char ch : to_string(c)) {
                if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u') {
                    isConsonant = true;
                    break;
                }
            }
            if (isConsonant) {
                consonants++;
            }
            word += c;
        }
    }

    if (consonants == n) {
        result.push_back(word);
    }

    return result;
}