```
string find_max(vector<string> words){
    string res = "";
    int maxUnique = 0;
    for (const auto& word : words) {
        set<char> s(word.begin(), word.end());
        if (s.size() > maxUnique) {
            res = word;
            maxUnique = s.size();
        } else if (s.size() == maxUnique && word < res) {
            res = word;
        }
    }
    return res;
}