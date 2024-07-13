string find_max(vector<string> words){
    string max_word;
    int max_count = 0;

    for (const auto &word : words) {
        int count = word.length();
        if(count > max_count || (count == max_count && word < max_word)){
            max_count = count;
            max_word = word;
        }
    }

    return max_word;
}