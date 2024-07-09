string find_max(vector<string> words){
    string max_word = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            int unique_a = a.size() - count(a.begin(), a.end(), '*');
            int unique_b = b.size() - count(b.begin(), b.end(), '*');
            if (unique_a == unique_b)
                return a < b;
            return unique_a > unique_b;
        });
    return max_word;
}