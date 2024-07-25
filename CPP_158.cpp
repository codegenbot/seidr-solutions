string find_max(vector<string> words){
    string max_word = *min_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            int unique_a = a.size() - __count_unique(a);
            int unique_b = b.size() - __count_unique(b);
            if (unique_a == unique_b)
                return a < b;
            return unique_a > unique_b;
        });
    return max_word;

}
int __count_unique(const string& str) {
    set<char> s(str.begin(), str.end());
    return s.size();
}