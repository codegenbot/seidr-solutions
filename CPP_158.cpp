string find_max(vector<string> words){
    string max = words[0];
    int unique_chars = 0;

    for(int i=1; i<words.size(); i++){
        int temp_unique_chars = 0;
        set<char> s(words[i].begin(), words[i].end());
        
        if(s.size() > unique_chars){
            max = words[i];
            unique_chars = s.size();
        }
    }

    return max;
}