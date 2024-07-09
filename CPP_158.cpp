string find_max(vector<string> words){
    string res;
    int max_len = 0;
    for (const auto& word : words) {
        int len = word.length();
        if(len > max_len || (len == max_len && word < res)){
            max_len = len;
            res = word;
        }
    }
    return res;
}