string find_max(vector<string> words){
    string res = words[0];
    int max_unique = 0;
    for(auto &word : words){
        int unique = 0;
        set<char> st(word.begin(), word.end());
        if(st.size() > max_unique){
            max_unique = st.size();
            res = word;
        }
    }
    return res;
}