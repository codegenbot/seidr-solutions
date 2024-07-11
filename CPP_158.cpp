string find_max(vector<string> words){
    string max_word = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            if (a.size() != b.size()) {
                return a.size() > b.size();
            }
            size_t unique_a = 0, unique_b = 0;
            for (char c : a) {
                if (c >= 'a' && c <= 'z') unique_a++;
                else if (c >= 'A' && c <= 'Z') unique_a++;
            }
            for (char c : b) {
                if (c >= 'a' && c <= 'z') unique_b++;
                else if (c >= 'A' && c <= 'Z') unique_b++;
            }
            return unique_a > unique_b;
        });
    return max_word;
}