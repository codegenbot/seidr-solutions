string find_max(vector<string> words){
    string max_string = words[0];
    int max_count = 0;

    for (string word : words) {
        int unique_count = 0;
        int count[26] = {0};

        for(char c : word) {
            if (count[c - 'a'] == 0) {
                unique_count++;
            }
            count[c - 'a']++;
        }

        if (unique_count > max_count || (unique_count == max_count && word < max_string)) {
            max_string = word;
            max_count = unique_count;
        }
    }

    return max_string;
}