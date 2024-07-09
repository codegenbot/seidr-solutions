string find_max(vector<string> words){
    string res = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            if (a.size() != b.size()) return a.size() > b.size();
            set<char> sa(a.begin(), a.end());
            set<char> sb(b.begin(), b.end());
            return sa.size() > sb.size()
                   || (sa.size() == sb.size() && a < b);
        }
    );
    return res;
}