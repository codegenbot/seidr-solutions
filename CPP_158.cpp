string find_max(vector<string> words){
    string result = *max_element(words.begin(), words.end(), 
        [](const string& a, const string& b) {
            int unique_a = a.size() - __count_unique(a);
            int unique_b = b.size() - __count_unique(b);
            if (unique_a > unique_b) return true;
            else if (unique_a < unique_b) return false;
            else return a < b;
        });
    return result;
}

int __count_unique(const string& s){
    set<char> unique_chars(s.begin(), s.end());
    return unique_chars.size();
}