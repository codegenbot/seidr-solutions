```
string find_max(vector<string> words){
    string max_word = *min_element(words.begin(), words.end(),
        [](const string &a, const string &b) {
            auto unique_chars_a = a.size() - std::count_if(a.begin(), a.end(), ::isupper);
            auto unique_chars_b = b.size() - std::count_if(b.begin(), b.end(), ::isupper);
            if (unique_chars_a == unique_chars_b)
                return a < b;
            else
                return unique_chars_a > unique_chars_b;
        });
    return max_word;
}