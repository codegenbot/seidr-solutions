string find_max(vector<string> words){
    string max_word = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            if (a.length() != b.length()) {
                return a.length() < b.length();
            }
            size_t unique_count_a = a.size(), unique_count_b = b.size();
            for (size_t i = 0; i < a.size(); ++i) {
                if (a[i] == a[0]) {
                    --unique_count_a;
                } else if (a[i] == b[0]) {
                    --unique_count_b;
                }
            }
            return unique_count_a > unique_count_b;
        });
    return max_word;
}