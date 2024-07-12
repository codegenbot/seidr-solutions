string find_max(vector<string> words){
    int max = 0;
    string result;
    for (const auto& word : words) {
        set<char> s(word.begin(), word.end());
        if (s.size() > max) {
            max = s.size();
            result = word;
        } else if (s.size() == max) {
            if (result > word) {
                result = word;
            }
        }
    }
    return result;
}