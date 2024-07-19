using namespace std;

string find_max(vector<string> words){
    string max_word = *min_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            if (a.length() == b.length()) {
                return a < b;
            }
            return a.length() > b.length();
        });
    for (string word : words) {
        set<char> char_set(word.begin(), word.end());
        if (char_set.size() > max_word.length()) {
            max_word = word;
        }
    }
    return max_word;
}