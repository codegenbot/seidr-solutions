string find_max(vector<string> words){
    string max_word = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            int count_a = 0;
            int count_b = 0;
            for (char c : a) {
                if (!count(c)) {
                    count_a++;
                }
            }
            for (char c : b) {
                if (!count(c)) {
                    count_b++;
                }
            }
            return count_a > count_b;
        });
    return max_word;
}