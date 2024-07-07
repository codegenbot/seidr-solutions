string find_max(vector<string> words){
    string max_word = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            return count(a.begin(), a.end(), a[0]) > count(b.begin(), b.end(), b[0]);
        });
    return *min_element(words.begin(), words.end(),
        [&max_word](const string& a, const string& b) {
            if(count(a.begin(), a.end(), a[0]) == count(max_word.begin(), max_word.end(), max_word[0]))
                return a < max_word;
            return false;
        });
}