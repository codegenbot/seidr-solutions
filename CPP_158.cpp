string find_max(vector<string> words){
    string max_word = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            return (a.length() == b.length()) ? a < b : a.length() > b.length();
        }
    );
    return max_word;
}