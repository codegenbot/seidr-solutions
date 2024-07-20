string find_max(vector<string> words){
    string max_word = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            int unique_chars_a = a.size() - (a.find_first_not_of(a[0]) == string::npos ? 1 : 0);
            int unique_chars_b = b.size() - (b.find_first_not_of(b[0]) == string::npos ? 1 : 0);
            if(unique_chars_a > unique_chars_b)
                return true;
            else if(unique_chars_a < unique_chars_b)
                return false;
            else
                return a < b;
        });
    return max_word;
}