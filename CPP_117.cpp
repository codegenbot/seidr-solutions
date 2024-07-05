vector<string> select_words(string s, int n) {
    vector<string> result;
    string word;
    auto is_consonant = [](char c) {
        c = tolower(c);
        return (c >= 'a' && c <= 'z' && !strchr("aeiou", c));
    };

    auto count_consonants = [&](const string& word) {
        return count_if(word.begin(), word.end(), is_consonant);
    };

    for (char c : s) {
        if (c == ' ') {
            if (!word.empty() && count_consonants(word) == n)
                result.push_back(word);
            word.clear();
        } else {
            word += c;
        }
    }
    if (!word.empty() && count_consonants(word) == n)
        result.push_back(word);

    return result;
}