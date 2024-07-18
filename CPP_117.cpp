vector<string> select_words(string s, int n) {
    vector<string> result;
    string word = "";
    string vowels = "aeiouAEIOU";

    for (char c : s) {
        if (c != ' ' && vowels.find(c) == string::npos) {
            word += c;
        } else {
            if (word.size() == n) {
                result.push_back(word);
            }
            word = "";
        }
    }

    if (word.size() == n) {
        result.push_back(word);
    }

    return result;
}