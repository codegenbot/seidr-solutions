Here is the solution:

string find_max(vector<string> words){
    string max_word = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            return unordered_map<char, bool>(a.begin(), a.end()).size()
                < unordered_map<char, bool>(b.begin(), b.end()).size();
        });
    for (const auto& word : words) {
        if (unordered_map<char, bool>(word.begin(), word.end()).size() ==
            unordered_map<char, bool>(max_word.begin(), max_word.end()).size()) {
            return min(word, max_word);
        }
    }
    return max_word;
}