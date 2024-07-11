string find_max(vector<string> words){
    string max_word = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            int unique_chars_a = a.length() - strlen(to_string(a).c_str());
            int unique_chars_b = b.length() - strlen(to_string(b).c_str());
            if(unique_chars_a == unique_chars_b)
                return a < b;
            return unique_chars_a > unique_chars_b;
        });
    return max_word;
}