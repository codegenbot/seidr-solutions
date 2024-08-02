string find_max(vector<string> words){
    string max_word = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            int unique_a = a.size() - unique_count(a);
            int unique_b = b.size() - unique_count(b);
            if(unique_a == unique_b)
                return a < b;
            return unique_a > unique_b;
        });
    return max_word;
}

int unique_count(const string& s) {
    set<char> unique_chars(s.begin(), s.end());
    return unique_chars.size();
}