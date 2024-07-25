string find_max(vector<string> words){
    string result = *minmax_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            return (int)a.size() + (int)count(a.begin(), a.end(), ' ') <
                   (int)b.size() + (int)count(b.begin(), b.end(), ' ');
        }
    );
    
    int max_unique = 0;
    for(string word : words){
        set<char> unique_chars(word.begin(), word.end());
        if(unique_chars.size() > max_unique){
            max_unique = unique_chars.size();
            result = word;
        } else if(unique_chars.size() == max_unique){
            if(result < word) result = word;
        }
    }

    return result;
}