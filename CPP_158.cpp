string find_max(vector<string> words){
    string result = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            int uniqueA = a.size() - __count_unique(a);
            int uniqueB = b.size() - __count_unique(b);
            if(uniqueA == uniqueB) return a < b;
            return uniqueA > uniqueB;
        });
    return result;
}

int __count_unique(const string& str){
    set<char> s(str.begin(), str.end());
    return s.size();
}