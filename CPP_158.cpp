string find_max(vector<string> words){
    string result;
    int max_count = 0;
    for(string word : words){
        int count = 0;
        set<char> s(word.begin(),word.end());
        if(s.size() > max_count){
            max_count = s.size();
            result = word;
        }
    }
    return result;
}