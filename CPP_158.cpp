Here is the completed code:

string find_max(vector<string> words){
    string max_word = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            if (a.size() == b.size()) {
                return a < b;
            }
            return a.size() > b.size();
        });
    size_t unique_chars_a = 0, unique_chars_b = 0;
    for (char c : max_word) {
        if (!std::count(max_word.begin(), max_word.end(), c))
            ++unique_chars_a;
        else
            break;
    }
    for (const string& word : words) {
        size_t count = 0;
        for (char c : word) {
            if (!std::count(word.begin(), word.end(), c))
                ++count;
            else
                break;
        }
        if (count > unique_chars_a) {
            max_word = word;
            unique_chars_a = count;
        }
    }
    return max_word;