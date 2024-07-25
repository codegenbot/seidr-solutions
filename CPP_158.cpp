string find_max(vector<string> words){
    string max = "";
    for(const auto& word : words) {
        int unique_count = 0;
        set<char> s(word.begin(), word.end());
        if(s.size() > unique_count) {
            unique_count = s.size();
            max = word;
        }
    }
    return max;
}