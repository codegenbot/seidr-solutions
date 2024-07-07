string find_max(vector<string> words){
    string max_word = *max_element(words.begin(), words.end(),
        [](const string &a, const string &b) {
            int a_unique = a.size() - count(a.begin(), a.end(), '*');
            int b_unique = b.size() - count(b.begin(), b.end(), '*');
            if (a_unique > b_unique) return true;
            else if (a_unique < b_unique) return false;
            else return a < b;
        });
    return max_word;
}