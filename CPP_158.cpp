for(string &word : words) {
        sort(word.begin(), word.end());
        word.erase(unique(word.begin(), word.end()), word.end());
    }
    sort(words.begin(), words.end(), [](const string &a, const string &b){
        if(a.length() == b.length()){
            return a < b;
        }
        return a.length() > b.length();
    });
    return words[0];
}