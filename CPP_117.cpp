vector<string> select_words(string s, int n) {
    vector<string> result;
    string word = "";
    int consonantCount = 0;

    for (char c : s) {
        if (c == ' ') {
            if (consonantCount == n)
                result.push_back(word);
            word = "";
            consonantCount = 0;
        } else if (isalpha(c)) {
            char lowerC = tolower(c);
            if (lowerC != 'a' && lowerC != 'e' && lowerC != 'i' && lowerC != 'o' && lowerC != 'u') {
                consonantCount++;
            }
            word += c;
        }
    }

    if (consonantCount == n)
        result.push_back(word);

    return result;
}