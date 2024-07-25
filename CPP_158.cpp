Here is the solution:

string find_max(vector<string> words){
    string max_word = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            if (a.length() == b.length()) {
                return a < b;
            }
            return a.length() > b.length();
        });
    int max_unique_chars = 0;
    for (char c : max_word) {
        bool found = false;
        for (int i = 0; i < max_word.length(); ++i) {
            if (c == max_word[i]) {
                found = true;
                break;
            }
        }
        if (!found) return "";
        ++max_unique_chars;
    }
    return max_word;
}