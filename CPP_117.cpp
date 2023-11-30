vector<string> select_words(string s, int n) {
    vector<string> result;
    string word;
    int consonantCount;

    for (char c : s) {
        if (c == ' ') {
            if (consonantCount == n) {
                result.push_back(word);
            }
            word = "";
            consonantCount = 0;
        } else {
            word += c;
            if (isConsonant(c)) {
                consonantCount++;
            }
        }
    }

    if (consonantCount == n) {
        result.push_back(word);
    }

    return result;
}

bool isConsonant(char c) {
    c = tolower(c);
    return !(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}