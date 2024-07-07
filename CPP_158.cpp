string find_max(vector<string> words){
    string result = words[0];
    int max_count = 0;

    for(auto word : words){
        int count = 0;
        set<char> s(word.begin(), word.end());
        if(s.size() > max_count){
            result = word;
            max_count = s.size();
        }
    }

    return result;
}