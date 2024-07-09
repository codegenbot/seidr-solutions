string find_max(vector<string> words){
    string result = "";
    int max_chars = 0;

    for(const auto& word : words){
        set<char> unique_chars(word.begin(), word.end());
        if(unique_chars.size() > max_chars){
            max_chars = unique_chars.size();
            result = word;
        } else if(unique_chars.size() == max_chars){
            if(result.compare(word) < 0)
                result = word;
        }
    }

    return result;
}