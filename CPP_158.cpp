string find_max(vector<string> words){
    string max_word = "";
    int max_count = 0;

    for (string word : words) {
        int count = 0;
        vector<bool> char_present(26, false);
        
        for (char c : word) {
            if (!char_present[c - 'a']) {
                char_present[c - 'a'] = true;
                count++;
            }
        }
        
        if (count > max_count || (count == max_count && word < max_word)) {
            max_count = count;
            max_word = word;
        }
    }

    return max_word;
}