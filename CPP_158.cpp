Here is the solution:

string find_max(vector<string> words) {
    string max_word;
    int max_unique = 0;

    for (const auto& word : words) {
        int unique_count = 0;
        set<char> char_set(word.begin(), word.end());

        if (char_set.size() > max_unique) {
            max_unique = char_set.size();
            max_word = word;
        } else if (char_set.size() == max_unique) {
            if (word < max_word) {
                max_word = word;
            }
        }
    }

    return max_word;
}