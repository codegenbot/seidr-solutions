string find_max(vector<string> words){
    string res = words[0];
    int max_unique_chars = 0;

    for (const auto &word : words) {
        int unique_chars = word.length();
        for (char c : word) {
            if (find(word.begin(), word.end(), c) != word.end()) {
                unique_chars--;
            }
        }
        if (unique_chars > max_unique_chars || (unique_chars == max_unique_chars && word < res)) {
            res = word;
            max_unique_chars = unique_chars;
        }
    }

    return res;
}