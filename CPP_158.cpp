string find_max(vector<string> words){
    string result = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            int uniqueCountA = a.size() - __count_unique(a);
            int uniqueCountB = b.size() - __count_unique(b);
            if(uniqueCountA == uniqueCountB)
                return a < b;
            else
                return uniqueCountA > uniqueCountB;
        });
    return result;
}

int __count_unique(const string& str) {
    unordered_set<char> seen;
    int count = 0;
    for(char c : str) {
        if(seen.find(c) == seen.end()) {
            seen.insert(c);
            count++;
        }
    }
    return count;
}