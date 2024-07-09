string anti_shuffle(string s) {
    vector<string> words;
    string word = "";
    for (const auto& c : s) {
        if (c == ' ') {
            words.push_back(word);
            word = "";
        } else {
            word += c;
        }
    }
    words.push_back(word);

    string result = "";
    for (const auto& word : words) {
        vector<char> v = word;
        sort(v.begin(), v.end());
        result += string(v.begin(), v.end()) + " ";
    }
    return result.substr(0, result.size() - 1);
}