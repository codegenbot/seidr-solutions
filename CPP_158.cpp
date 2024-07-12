string find_max(vector<string> words){
    string result;
    int max_unique = 0;

    for(auto& word : words){
        set<char> s(word.begin(), word.end());
        if(s.size() > max_unique){
            result = word;
            max_unique = s.size();
        } else if (s.size() == max_unique) {
            if(word < result) {
                result = word;
            }
        }
    }

    return result;
}