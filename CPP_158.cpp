Here is the completed code:

string find_max(vector<string> words){
    string max_word = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            return (a.size() != b.size()) ||
                   (a.size() == b.size() && a < b);
        });
    for(auto& word : words) {
        if(word.size() > max_word.size()) {
            max_word = word;
        } else if(word.size() == max_word.size()) {
            if(word < max_word) {
                max_word = word;
            }
        }
    }
    return max_word;
}