string find_max(vector<string> words){
    string result = words[0];
    int max_unique_chars = 0;

    for(string word : words) {
        set<char> unique_chars(word.begin(), word.end());
        int current_unique_chars = unique_chars.size();
        if(current_unique_chars > max_unique_chars) {
            max_unique_chars = current_unique_chars;
            result = word;
        }
    }

    return result;
}