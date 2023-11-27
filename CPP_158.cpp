string find_max(vector<string> words){
    string max_word;
    int max_unique_chars = 0;

    for (string word : words) {
        int unique_chars = 0;
        bool visited[256] = { false };

        for (char ch : word) {
            if (!visited[(int)ch]) {
                visited[(int)ch] = true;
                unique_chars++;
            }
        }

        if (unique_chars > max_unique_chars || (unique_chars == max_unique_chars && word < max_word)) {
            max_word = word;
            max_unique_chars = unique_chars;
        }
    }

    return max_word;
}